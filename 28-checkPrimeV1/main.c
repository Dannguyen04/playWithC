#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV1

void checkPrimeV1(void);
int main()
{
    checkPrimeV1();
    return 0;
}

void checkPrimeV1(void){
    //Input n
    int number;
    printf("\nNhap number: ");
    scanf("%d", &number);
    fflush(stdin);
    //checkPrime
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
