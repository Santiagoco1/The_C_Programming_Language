
/*
    Write a function htoi(s), which converts a string of hexadecimal digits
    (including an optional 0x or 0X) into its equivalent integer value.
    The allowable digits are '0' through '9', 'a' through 'f', and 'A' through 'F'. 
*/

#include <stdio.h>

int htoi(char s[]) {

    int i, n;
    n = 0;

    for(i = 0; s[i] != '\n'; i++)
        s[i] = tolower(s[i]);

    if(s[1] == 'x') i = 2;
    else i = 0;

    for(; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f'); i++) {
        if(s[i] >= '0' && s[i] <= '9')
            n = 16 * n + (s[i] - '0');
        else
            n = 16 * n + (s[i] - 'a' + 10);
    }
    return n;   
}