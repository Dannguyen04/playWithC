#include <stdio.h>
#include <stdlib.h>

/*
    Nhập vào 1 số nguyên n
    Tính giai thừa của n
    Nhập n =7
    n! =
    hint 7! = 7*6*5*4*3*2*1
*/

int main()
{
    int n;
    int sum = 1;

    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n < 0){

        printf("\n Giai thua ko co am");

    }else{
        for(int i = 1; i <= n; i++){
            sum *= i;
        }
    }
    printf("%d", sum);
    return 0;
}
