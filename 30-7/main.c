#include <stdio.h>
#include <stdlib.h>
/*
    30-7
    Xin người dùng n,
    in ra các lẻ trong khoảng từ 1 đến n
*/

void printOdd(void);
int main()
{
    printOdd();
    return 0;
}
void printOdd(void){
    int n;
    printf("\nNhap so nguyen: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%2d", i);
        }
    }
}
