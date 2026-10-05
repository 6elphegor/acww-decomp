// mwcc-flags: -nothumb -O4,p
// NitroSystem (NNS) g2d CharCanvas: blit one glyph's bitmap into one 8x8 character (LetterChar; called by
// DrawGlyph1D and DrawGlyphLine with an LC_INFO block). autoload_2 0x02102cbc-0x02102f38. ARM, mwcc 1.2/base,
// -O4,p. Written as in NitroSystem's g2d_CharCanvas.c (with the SDK's MATH_IMin/MATH_IMax and NitroSystem's bit
// reader inline); that text compiles to the original as it is.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef unsigned long long u64;

#define CHARACTER_WIDTH     8
#define CHARACTER_HEIGHT    8

typedef struct LC_INFO {
    const u8 *dst;      // 0x00  destination character
    const u8 *src;      // 0x04  glyph bitmap
    int ofs_x;          // 0x08
    int ofs_y;          // 0x0c
    int width;          // 0x10
    int height;         // 0x14
    int dsrc;           // 0x18  bits per glyph row
    int srcBpp;         // 0x1c
    int dstBpp;         // 0x20
    u32 cl;             // 0x24  colour offset
} LC_INFO;

typedef struct NNSiG2dBitReader {
    const u8 *src;
    s8 availableBits;
    u8 bits;
    u8 padding_[2];
} NNSiG2dBitReader;

u32 NNSi_G2dBitReaderRead(NNSiG2dBitReader *reader, int nBits);

static inline void NNSi_G2dBitReaderInit(NNSiG2dBitReader *reader, const void *src)
{
    reader->availableBits = 0;
    reader->src = (const u8 *)src;
    reader->bits = 0;
}

static inline int MATH_IMin(int a, int b)
{
    return (a <= b) ? a : b;
}

static inline int MATH_IMax(int a, int b)
{
    return (a >= b) ? a : b;
}

void LetterChar (LC_INFO * i)
{
    const u8 * pSrc;
    u32 x_st;
    u32 x_ed;
    u32 y_st;
    u32 y_ed;
    u32 offset;

    {
        u32 bit_y_begin;

        x_st = (unsigned int)MATH_IMax(i->ofs_x, 0);
        y_st = (unsigned int)MATH_IMax(i->ofs_y, 0);
        x_ed = (unsigned int)MATH_IMin(CHARACTER_WIDTH, i->ofs_x + i->width);
        y_ed = (unsigned int)MATH_IMin(CHARACTER_HEIGHT, i->ofs_y + i->height);

        bit_y_begin = (unsigned int)-MATH_IMin(i->ofs_y, 0);
        offset = -MATH_IMin(i->ofs_x, 0) * i->srcBpp + bit_y_begin * i->dsrc;

        pSrc = i->src;
    }

    {
        u32 x;
        const int dsrc = i->dsrc;
        const int srcBpp = i->srcBpp;
        const int dstBpp = i->dstBpp;

        x_st *= dstBpp;
        x_ed *= dstBpp;

        if ( dstBpp == 4 ) {
            u32 * pDst = (u32 *)i->dst + y_st;
            u32 * pDstEnd = (u32 *)i->dst + y_ed;
            u32 cl = i->cl;

            for ( ; pDst < pDstEnd; pDst++) {
                NNSiG2dBitReader reader;
                u32 out_line = *pDst;

                NNSi_G2dBitReaderInit(&reader, pSrc + offset / 8);
                (void)NNSi_G2dBitReaderRead(&reader, (int)offset % 8);

                for (x = x_st; x < x_ed; x += 4) {
                    u32 bits = NNSi_G2dBitReaderRead(&reader, srcBpp);

                    if ( bits != 0 ) {
                        out_line = (out_line & ~(0xF << x)) | ((cl + bits) << x);
                    }
                }

                *pDst = out_line;

                offset += dsrc;
            }
        } else {
            u32 * pDst = (u32 *)((u64 *)i->dst + y_st);
            u32 * const pDstEnd = (u32 *)((u64 *)i->dst + y_ed);
            u32 cl = i->cl;

            for ( ; pDst < pDstEnd; pDst += 2) {
                NNSiG2dBitReader reader;
                u32 out_line_0 = *pDst;
                u32 out_line_1 = *(pDst + 1);

                NNSi_G2dBitReaderInit(&reader, pSrc + offset / 8);
                (void)NNSi_G2dBitReaderRead(&reader, (int)offset % 8);

                for (x = x_st; x < x_ed; x += 8) {
                    u32 bits = NNSi_G2dBitReaderRead(&reader, srcBpp);

                    if ( bits != 0 ) {
                        if ( x < 32 ) {
                            out_line_0 = (out_line_0 & ~((u32)0xFF << x)) | ((u32)(cl + bits) << x);
                        } else {
                            const u32 x_32 = x - 32;
                            out_line_1 = (out_line_1 & ~((u32)0xFF << x_32)) | ((u32)(cl + bits) << x_32);
                        }
                    }
                }

                *pDst = out_line_0;
                *(pDst + 1) = out_line_1;

                offset += dsrc;
            }
        }
    }
}
