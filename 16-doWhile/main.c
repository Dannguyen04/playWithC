#include <stdio.h>
#include <stdlib.h>

//16-doWhile-While
//loop: vòng lặp
// for | do while | while
int main()
{
    /*
        do{
            command
        }while(condition);

    */

    int i1 = 1;
    do{
        printf("\nI do du %d", i1);
        i1++;
    }while(i1 <= 5);


    //ép người dùng nhập 15

    int a1;
    for(;;){
        printf("\nNhap a: ");
        scanf("%d", &a1);
        if(a1 == 15){
            break;
        }
    }


    int a;

    do{
        printf("\nNhap a: ");
        scanf("%d", &a);
    }while(a != 15);
/*
    int i = 1;
    while(i <= 5){
        printf("\nI lop du %d", i);
        i++;
    }
*/
    return 0;
}
