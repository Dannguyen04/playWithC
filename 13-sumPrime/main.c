#include <stdio.h>
#include <stdlib.h>

//sumPrime
//Nhập vào start và end
//tính tổng các số nguyên tố trong khoảng
//từ start tới end
int main()
{
    int start, end;

    printf("\nInput start: ");
    scanf("%d", &start);
    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0;
    //int isPrime = 1; viết như này cũng dc nhưng tốn byte
    for(int i = start; i <= end; i++){
        int isPrime = 1;
        if( i >= 2){
            for(int j = 2; j <= i - 1;j++){
                 if(i % j == 0){
                    isPrime = 0;
                    break;
                 }
            }

            if(isPrime == 1){
                sum += i;
            }
        }
    }
    printf("\nSumPrime = %d", sum);
    return 0;
}
