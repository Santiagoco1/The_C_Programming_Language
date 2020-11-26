/*
    Rewrite the function lower, which converts upper case letters to lower case,
    with a conditional expression instead of if-else.
*/

#include <stdio.h>

lower(char c){
    return c = c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}