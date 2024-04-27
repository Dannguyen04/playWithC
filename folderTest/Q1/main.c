#include <stdio.h>
#include <stdlib.h>

//Q1.
void number(int n);
int checkPrime(int number);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\nKet qua tra ra la %d", checkPrime(n));
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

