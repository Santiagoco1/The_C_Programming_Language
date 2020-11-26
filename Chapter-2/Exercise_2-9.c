/*
    In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x.
    Explain why. Use this observation to write a faster version of bitcount.  
*/

#include <stdio.h>

int bitcount(unsigned x) {
    int i;
    i = 0;

    while(x &= (x-1))
        i++;
    return ++i;    
} 