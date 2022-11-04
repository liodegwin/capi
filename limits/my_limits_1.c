//
// Created by liode on 2022/11/4.
//
#include "limits.h"
#include "stdio.h"
#include "stdint.h"
int main(){
    //c99 c89
    printf("Often used macros :\n\n");

    printf("\tCHAR_MIN       = %+d\n", CHAR_MIN);
    printf("\tCHAR_MAX       = %+d\n", CHAR_MAX);

    printf("\tSCHAR_MIN      = %+d\n", SCHAR_MIN);
    printf("\tSCHAR_MAX      = %+d\n", SCHAR_MAX);

    printf("\tUCHAR_MAX      = %u\n\n", UCHAR_MAX);

    printf("\tSHRT_MIN       = %+d\n", SHRT_MIN);
    printf("\tSHRT_MAX       = %+d\n", SHRT_MAX);
    printf("\tUSHRT_MAX      = %u\n\n", USHRT_MAX);

    printf("\tINT_MIN        = %+d\n", INT_MIN);
    printf("\tINT_MAX        = %+d\n", INT_MAX);
    printf("\tUINT_MAX       = %u\n\n", UINT_MAX);

    printf("\tLONG_MIN       = %+ld\n", LONG_MIN);
    printf("\tLONG_MAX       = %+ld\n", LONG_MAX);
    printf("\tULONG_MAX      = %lu\n\n", ULONG_MAX);

    printf("Not often used micros :\n\n");

    printf("\tCHAR_BIT       = %d\n", CHAR_BIT);
    printf("\tMB_LEN_MAX     = %d\n\n", MB_LEN_MAX);
    printf("\tLLONG_MIN      = %+lld\n", LLONG_MIN);
    printf("\tLLONG_MAX      = %+lld\n", LLONG_MAX);
    printf("\tULLONG_MAX     = %llu\n\n", ULLONG_MAX);

    printf("\tPTRDIFF_MIN    = %td\n", PTRDIFF_MIN);
    printf("\tPTRDIFF_MAX    = %+td\n", PTRDIFF_MAX);
    printf("\tSIZE_MAX       = %zu\n", SIZE_MAX);
    printf("\tSIG_ATOMIC_MIN = %+jd\n",(intmax_t)SIG_ATOMIC_MIN);
    printf("\tSIG_ATOMIC_MAX = %+jd\n",(intmax_t)SIG_ATOMIC_MAX);
    printf("\tWCHAR_MIN      = %+jd\n",(intmax_t)WCHAR_MIN);
    printf("\tWCHAR_MAX      = %+jd\n",(intmax_t)WCHAR_MAX);
    printf("\tWINT_MIN       = %jd\n", (intmax_t)WINT_MIN);
    printf("\tWINT_MAX       = %jd\n", (intmax_t)WINT_MAX);
}