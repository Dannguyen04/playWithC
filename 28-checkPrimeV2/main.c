#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV2

void checkPrimeV2(int number);
int main()
{
    int number1;
    printf("\nNhap number: ");
    scanf("%d", &number1);
    fflush(stdin);
    checkPrimeV2(number1);
    return 0;
}

void checkPrimeV2(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return;
            }
        }
        printf("\n%d is prime", number);
    }else{
        printf("\n%d is not prime", number);
    }
}
