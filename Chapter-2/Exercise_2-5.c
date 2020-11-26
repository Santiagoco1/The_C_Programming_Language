/*
    Write the function any(s1,s2), which returns the first location in a string s1 where 
    any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
*/

#include <stdio.h>

char any(char s[], char p[]) {

    int i, j;
    char c;

    c = '-1';
    for(i = 0; s[i] != '\n'; i++) {
        for(j = 0; p[j] != '\n'; j++) {
            if(s[i] == p[j])
                c = s[i];
        }
    }
    return c;
}