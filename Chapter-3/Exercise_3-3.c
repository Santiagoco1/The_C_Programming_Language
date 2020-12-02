#include <stdio.h>

void expand(char s1[], char s2[]) {
    int i, j;
    char c;

    i = j = 0;

    while((c = s1[i++]) != '\0')
        if(s1[i] == '-' && s1[++i] >= c)
            while(c < s1[i])
                s2[j++] = c++;
        else
            s2[j++] = c;
    s2[j] = '\0';
}

