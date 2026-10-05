// mwcc-flags: -nothumb -O4,p

#define cpd ((unsigned char *) dst)
#define lpd ((unsigned long *) dst)
#define deref_auto_inc(p) *(p)++
// __fill_mem
void __fill_mem(void *dst, int val, unsigned long n) {
    unsigned long v = (unsigned char)val;
    unsigned long i;
    
    if (n >= 32) {
        i = (-(unsigned long)dst) & 3;
        if (i) {
            n -= i;
            do
                deref_auto_inc(cpd) = v;
            while (--i);
        }
        if (v) v |= v << 24 | v << 16 | v << 8;
        
        i = n >> 5;
        if (i)
            do {
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
                deref_auto_inc(lpd) = v;
            } while (--i);
        i = (n & 31) >> 2;
        if (i)
            do
                deref_auto_inc(lpd) = v;
            while (--i);
        
        n &= 3;
    }
    if (n)
        do
            deref_auto_inc(cpd) = v;
        while (--n);
    return;
}
