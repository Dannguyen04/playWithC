#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV3

char toUpperCaseV3(void);
int main()
{
    char ch1 = toUpperCaseV3();
    printf("\nTo Upper Case: %c", ch1);
    return 0;
}
char toUpperCaseV3(void){
    char ch;
    printf("\nInput ch: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }
    return ch;
}

