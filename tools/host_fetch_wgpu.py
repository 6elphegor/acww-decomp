#!/usr/bin/env python3
"""Download wgpu-native (the GPU renderer's WebGPU library, docs/portability.md 5.4) into toolchains/ in the
repository, where tools/configure_host.py finds it: the pinned release, checked against its SHA-256.

    python3 tools/host_fetch_wgpu.py

Linux x86-64 and macOS (arm64, x86-64); the other builds use the CPU renderers."""
import hashlib
import io
import os
import platform
import sys
import urllib.request
import zipfile

VERSION = "v29.0.1.1"
RELEASES = {  # platform: (the release's file, its SHA-256)
    "linux-x86_64": ("wgpu-linux-x86_64-release.zip",
                     "95a4d90c071005a98d03eab348beaa6b07e16eb00d1dcdb9f8348f75eb97ec5a"),
    "darwin-arm64": ("wgpu-macos-aarch64-release.zip",
                     "a5797a37b1adf720bcd5dcffb291edbbd5b7b14be0a3874c28e6393a655a7a3e"),
    "darwin-x86_64": ("wgpu-macos-x86_64-release.zip",
                      "8e2f7378548ddd0e2cf21e7d864dda46e953f0af724855a33778b85ead206d41"),
}


def main():
    plat = f"{platform.system().lower()}-{platform.machine().lower()}".replace("amd64", "x86_64")
    if plat not in RELEASES:
        sys.exit(f"host_fetch_wgpu.py: no wgpu-native release pinned for {plat} (the build uses the CPU renderers)")
    name, sha = RELEASES[plat]
    root = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "toolchains",
                        f"wgpu-native-{VERSION}")
    dest = os.path.join(root, plat)
    if os.path.exists(os.path.join(dest, "lib", "libwgpu_native.a")):
        print(f"wgpu-native {VERSION} is already in {dest}")
        return
    url = f"https://github.com/gfx-rs/wgpu-native/releases/download/{VERSION}/{name}"
    print(f"downloading {url}")
    with urllib.request.urlopen(url, timeout=60) as r:
        data = r.read()
    got = hashlib.sha256(data).hexdigest()
    if got != sha:
        sys.exit(f"host_fetch_wgpu.py: {name}: SHA-256 {got}, expected {sha}")
    os.makedirs(dest, exist_ok=True)
    with zipfile.ZipFile(io.BytesIO(data)) as z:
        for info in z.infolist():
            path = os.path.normpath(os.path.join(dest, info.filename))
            if not path.startswith(os.path.normpath(dest) + os.sep) and path != os.path.normpath(dest):
                sys.exit(f"host_fetch_wgpu.py: {name}: a path outside the directory: {info.filename}")
            if info.is_dir():
                os.makedirs(path, exist_ok=True)
            else:
                os.makedirs(os.path.dirname(path), exist_ok=True)
                with z.open(info) as src, open(path, "wb") as out:
                    out.write(src.read())
    print(f"wgpu-native {VERSION} in {dest}")


if __name__ == "__main__":
    main()
