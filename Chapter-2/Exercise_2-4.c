#include <stdio.h>

#define MAXLINE 1000

void squeeze(char s[], char p[]);
void delete(char s[], char c); 

int main() {

    int i;
    char s[MAXLINE], p[MAXLINE];

    s[0] = 'a';
    s[1] = 'b';
    s[2] = 'c';
    s[3] = '\n';
    s[4] = '\0';

    p[0] = 'a';
    p[1] = 'q';
    p[2] = 'r';
    p[3] = '\n';
    p[4] = '\0';

    squeeze(s,p);

    for(i = 0; i < 5; i++)
        printf("%c", s[i]);

    return 0;
}

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