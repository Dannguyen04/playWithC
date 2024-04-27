#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV4
int checkPrimeV4(int number);
int main()
{
    int number1;
    printf("\nNhap number: ");
    scanf("%d", &number1);
    fflush(stdin);
    int check = checkPrimeV4(number1);
    if(check == 1){
        printf("%d is prime", number1);
    }else{
        printf("%d is not prime", number1);
    }

    /*
        if(checkPrimeV4(number1){
            printf("\n%d is prime", number1);
        }else{
            printf("\n%d is not prime", number1);
        }
    */
    return 0;
}
int checkPrimeV4(int number){
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
    /*  cách viết khác
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return number >= 2;
    */
}
