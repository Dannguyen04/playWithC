#include <stdio.h>
#include <stdlib.h>

//18-perfect square
//số chín phương:
//  là số nếu căn 2 sẽ dc nguyên dương
//nhập vào 1 số nguyên dương n
//kiểm tra xem n có phải chính phương ko?

//for

//float | int | ép kiểu
int main()
{
    int n;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nInput again");
        }
    }while(ch != 10 || n < 0);
    /*
    for(int i = 0 ; pow(i,2) <= n; i++){
        if(pow(i,2) == n){
            printf("%d is perfect square", n);
            return;
        }
    }

    printf("%d is not perfect square", n);
    */

    if(sqrt(n) == (int) sqrt(n)){
        printf("%d is perfect square",n);
    }else{
        printf("%d is not perfect square", n);
    }
    return 0;
}
