#include <stdio.h>
#include <stdlib.h>

//Q2.
int fibonacci(int number);
int main()
{
    int n;
    printf("\nNhap number: ");
    scanf("%d", &n);
    printf("%d la so fibonacci thu %d", fibonacci(n), n);
    return 0;
}

int fibonacci(int number){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= number - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
