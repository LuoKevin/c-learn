#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("Int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("Signed char range: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char max: %d\n", UCHAR_MAX);
    printf("Unsigned int max: %u\n", UINT_MAX);
    printf("Unsigned short max: %d\n", USHRT_MAX);
    printf("Unsigned long max: %lu\n", ULONG_MAX);
    printf("Char range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Long range: %ld to %ld\n", LONG_MIN, LONG_MAX);

    printf("Float range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Double range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Long double range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
}