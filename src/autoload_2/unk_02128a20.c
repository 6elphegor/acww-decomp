// mwcc-flags: -nothumb -O4,p

#ifdef HOST
#define FILL_WORD unsigned int  // the 32-bit word of the fill (long is 64 bits on 64-bit hosts)
#else
#define FILL_WORD unsigned long
#endif
#ifdef MODERN
// GCC has no cast lvalues (an mwcc extension): reinterpret the pointer variable itself
#define cpd (*(unsigned char **)&dst)
#define lpd (*(FILL_WORD **)&dst)
#else
#define cpd ((unsigned char *) dst)
#define lpd ((unsigned long *) dst)
#endif
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
