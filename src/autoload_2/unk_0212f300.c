// mwcc-flags: -nothumb -O4,p
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned long long u64;
typedef struct {
    u8 sign;
    char unused;
    short exp;
    struct {
        u8 length;
        u8 text[32];
        u8 unused;
    } sig;
} decimal;

extern u8 data_0213c5b4[];
extern double data_0213c574[];
extern float data_0213c31c;
extern void func_02130628(decimal *, const u8 *, short);
extern int func_02130030(const decimal *, const decimal *);
extern int func_02130150(const decimal *, const decimal *);
extern void func_0212fd74(decimal *, const decimal *, const decimal *);
extern void func_0212fb1c(decimal *, double);
extern double func_0212f2f4(double, double);
extern double func_0212f010(double, int);
extern double copysign(double, double);

#define pow func_0212f2f4
#define ldexp func_0212f010
#define __str2dec func_02130628
#define __less_dec func_02130030
#define __equals_dec func_02130150
#define __minus_dec func_0212fd74
#define __num2dec_internal func_0212fb1c
#define INFINITY data_0213c31c
#define pow_10 data_0213c574
#define max_dbl_str data_0213c5b4
#define DBL_MAX 1.7976931348623157e308
#define isinf(x) (__fpclassifyd(x) == 2)

static inline int __fpclassifyd(double x) {
    switch (*(1 + (s32 *)&x) & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(1 + (s32 *)&x) & 0x000fffff) || *(s32 *)&x) return 1;
        return 2;
    case 0:
        if ((*(1 + (s32 *)&x) & 0x000fffff) || *(s32 *)&x) return 5;
        return 3;
    default:
        return 4;
    }
}

// __dec2num (MSL ansi_fp.c)
double func_0212f300(const decimal *d) {
    if (d->sig.length <= 0) return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
    switch (d->sig.text[0]) {
    case '0':
        return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
    case 'I':
        return copysign((double)INFINITY, d->sign == 0 ? 1.0 : -1.0);
    case 'N': {
        double result;
        unsigned long long *ll = (unsigned long long *)&result;
        *ll = 0x7FF0000000000000ULL;
        if (d->sign) *ll |= 0x8000000000000000ULL;
        *ll |= 0x0008000000000000ULL;
        return result;
    }
    }
    {
        decimal dec = *d;
        unsigned char *i = dec.sig.text;
        unsigned char *e = i + dec.sig.length;
        double first_guess;
        int exponent;
        for (; i < e; ++i) *i -= '0';
        dec.exp += dec.sig.length - 1;
        exponent = dec.exp;
        {
            decimal max;
            __str2dec(&max, max_dbl_str, 308);
            if (__less_dec(&max, &dec)) return copysign((double)INFINITY, d->sign == 0 ? 1.0 : -1.0);
        }
        i = dec.sig.text;
        first_guess = *i++;
        while (i < e) {
            unsigned long ival = 0;
            int j;
            double temp1, temp2;
            int ndig = (int)(e - i) % 8;
            if (ndig == 0) ndig = 8;
            for (j = 0; j < ndig; ++j, ++i) ival = ival * 10 + *i;
            temp1 = first_guess * pow_10[ndig - 1];
            temp2 = temp1 + ival;
            if (ival != 0 && temp1 == temp2) break;
            first_guess = temp2;
            exponent -= ndig;
        }
        if (exponent < 0)
            first_guess /= pow(5.0, -exponent);
        else
            first_guess *= pow(5.0, exponent);
        first_guess = ldexp(first_guess, exponent);
        if (isinf(first_guess)) first_guess = DBL_MAX;
        {
            decimal feedback1, feedback2, difflow, diffhigh;
            double next_guess;
            unsigned long long *ull = (unsigned long long *)&next_guess;
            int guessed_low = 0;
            __num2dec_internal(&feedback1, first_guess);
            if (__equals_dec(&feedback1, &dec)) goto done;
            if (__less_dec(&feedback1, &dec)) guessed_low = 1;
            next_guess = first_guess;
            while (1) {
                if (guessed_low) {
                    ++*ull;
                    if (isinf(next_guess)) goto done;
                } else
                    --*ull;
                __num2dec_internal(&feedback2, next_guess);
                if (guessed_low && !__less_dec(&feedback2, &dec))
                    break;
                else if (!guessed_low && !__less_dec(&dec, &feedback2)) {
                    difflow = feedback1;
                    feedback1 = feedback2;
                    feedback2 = difflow;
                    {
                        double temp = first_guess;
                        first_guess = next_guess;
                        next_guess = temp;
                    }
                    break;
                }
                feedback1 = feedback2;
                first_guess = next_guess;
            }
            __minus_dec(&difflow, &dec, &feedback1);
            __minus_dec(&diffhigh, &feedback2, &dec);
            if (__equals_dec(&difflow, &diffhigh)) {
                if (*(unsigned long long *)&first_guess & 1) first_guess = next_guess;
            } else if (!__less_dec(&difflow, &diffhigh))
                first_guess = next_guess;
        }
    done:
        if (dec.sign) first_guess = -first_guess;
        return first_guess;
    }
}
