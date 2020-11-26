
/*
    Write a loop equivalent to the for loop above without using && or ||. 
*/

int main() {

    int isValid;
    isValid = 1;

    for(i = 0; isValid; ++i) {
        if(i < lim-1)
            if((c=getchar()) != '\n')
                if(c != EOF)
                    s[i] = c;
                else
                    isValid = 0;
            else isValid = 0;
        else isValid = 0;
    }