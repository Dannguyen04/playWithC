#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV3

int checkPrimeV3(void);
int main()
{
    int check = checkPrimeV3();
    if(check == 1){
        printf("\nThis number is prime");
    }else{
        printf("\nThis number is not prime");
    }
    return 0;
}
int checkPrimeV3(void){
    int number;
    printf("\nNhap number: ");
    scanf("%d", &number);
    fflush(stdin);
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
