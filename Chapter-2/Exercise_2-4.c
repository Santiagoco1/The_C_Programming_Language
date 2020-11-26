/*
    Write an alternative version of squeeze(s1,s2)that deletes each
    character in s1 that matches any character in the strings2.  
*/

#include <stdio.h>

void squeeze(char s[], char p[]) {
    int i, j;
    char c;

    for(i = 0; s[i] != '\n'; i++) {
        for(j = 0; p[j] != '\n'; j++) {
            if((c = s[i]) == p[j])
                delete(s, c);
        }
    }
}

void delete(char s[], char c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
} 