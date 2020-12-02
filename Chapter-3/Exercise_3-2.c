#include <stdio.h>

void escape(char s[], char t[]) {
    int i, j;
    for(i = j = 0; t[i] != '\0'; i++, j++)
        switch(t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
        }
    s[j] = '\0';
}