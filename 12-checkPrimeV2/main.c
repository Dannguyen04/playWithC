#include <stdio.h>
#include <stdlib.h>

//12-check PrimeV2
//not use return;
int main()
{
    int isPrime = 1; //1: true  0:false
    int n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n >= 2){
        for(int i = 2; i <= n - 1 ; i++){
            if( n % i == 0){
                //printf("\nThis %d is not prime", n);
                //return;
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("\nThis %d is prime", n);
        }else{
            printf("\nThis %d is not prime", n);
        }
    }else{
        printf("\nThis %d is not prime", n);
    }



    return 0;
}
