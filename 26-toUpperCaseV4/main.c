#include <stdio.h>
#include <stdlib.h>
//26. toUpperCaseV4

char toUpperCaseV4(char ch);

int main()
{
    char ch2;
    printf("\nInput ch: ");
    scanf("%c", &ch2);
    fflush(stdin);
    ch2 = toUpperCaseV4(ch2);
    //printf("%c", toUpperCaseV4(ch2)); cách 2
    printf("%c", ch2);
    return 0;
}

char toUpperCaseV4(char ch){
    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }
    return ch;
}
