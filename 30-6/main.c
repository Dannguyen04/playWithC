#include <stdio.h>
#include <stdlib.h>
/*
    30-6
    viết hàm nhận vào n, tính tổng
    các số chẳn từ 1 đến n
*/

int sumEven (int n);
int main()
{
    printf("\nSum = %d", sumEven(5));
    return 0;
}
int sumEven (int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
