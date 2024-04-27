#include <stdio.h>
#include <stdlib.h>

//29-countPrime
//nhập vào start và end
//in, đếm, tính tổng các số nguyên tố
//trong đoạn từ start đến end
int checkPrime(int number);
int main()
{
    int start, end;

    printf("\nNhap Start: ");
    scanf("%d", &start);
    printf("\nNhap End: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0, count = 0;
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            printf("%5d", i);
            sum += i;
            count++;
        }
    }
    printf("\nSum = %d, count = %d", sum, count);
    return 0;
}

int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
