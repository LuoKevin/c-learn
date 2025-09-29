#include <stdio.h>
#include <limits.h>

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
}