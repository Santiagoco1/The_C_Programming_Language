
/*
    Write a program to determine the ranges of "char", "short", "int", and "long" variables,
    both signed and unsigned, by printing appropriate values from standard headers and by direct computation.
    Harder if you compute them: determine the ranges of the various floating-point types. 
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    /* Ranges of the floating-point types by standard headers */

    printf("Ranges of the floating-point types by standard headers\n\n");
    
    printf("Maximum Unsigned Int: %u\n", UINT_MAX);
    printf("Maximum Unsigned Char: %d\n", UCHAR_MAX);
    printf("Maximum Unsigned Short: %d\n", USHRT_MAX);
    printf("Maximum Unsigned Long: %lu\n", ULONG_MAX);

    printf("\n");

    printf("Minimum Signed Int: %d\n", INT_MIN);
    printf("Maximum Signed Int: %d\n", INT_MAX);
    printf("Minimum Signed Char: %d\n", SCHAR_MIN);
    printf("Maximum Signed Char: %d\n", SCHAR_MAX);
    printf("Minimum Signed Short: %d\n", SHRT_MIN);
    printf("Maximum Signed Short: %d\n", SHRT_MAX);
    printf("Minimum Signed Long: %ld\n", LONG_MIN);
    printf("Maxmum Signed Long: %ld\n", LONG_MAX);

    printf("\n\n");

    /* Ranges of the floating-point types by direct computation*/

    printf("Ranges of the floating-point types by direct computation\n\n");
    
    printf("Maximum Unsigned Int: %u\n", (unsigned int)~0);
    printf("Maximum Unsigned Char: %d\n", (unsigned char)~0);
    printf("Maximum Unsigned Short: %d\n", (unsigned short)~0);
    printf("Maximum UNsigned Long: %lu\n", (unsigned long)~0);

    printf("\n");

    printf("Minimum Signed Int: %d\n", -(int)((unsigned int)~0 >> 1) -1);
    printf("Maximum Signed Int: %d\n", (int)((unsigned int)~0 >> 1));
    printf("Minimum Signed Char: %d\n", -(char)((unsigned char)~0 >> 1) -1);
    printf("Maximum Signed Char: %d\n", (char)((unsigned char)~0 >> 1));
    printf("Minimum Signed Short: %d\n", -(short)((unsigned short)~0 >> 1) -1);
    printf("Maximum Signed Short: %d\n", (short)((unsigned short)~0 >> 1));
    printf("Minimum Signed Long: %ld\n", -(long)((unsigned long)~0 >> 1) -1);
    printf("Maxmum Signed Long: %ld\n", (long)((unsigned long)~0 >> 1));

    return 0;
}