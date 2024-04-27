#include <stdio.h>
#include <stdlib.h>
//15-input right form
/*
    Nhập vào 1 số nguyên đích thực
    nhập sai chửi, phải nhập lại
    12 okie         phần dư: \n | 10
    17,8 chửi   .8
    12a chửi    a
*/
int main()
{
    int n;
    char buffer;

    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nDo you know input a number?");
        }
    }while(buffer != 10);
    return 0;
}
