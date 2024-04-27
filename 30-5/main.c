#include <stdio.h>
#include <stdlib.h>

/*
    30-5
    Viết hàm nhận vào n, return số fibonacci
*/
int fibonacci(int n);
int fibonacciV2(int n);
int main()
{
    printf("so ne %d", fibonacciV2(4));
    return 0;
}
int fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}

int fibonacciV2(int n){
    if(n == 1 | n == 2) return 1;
    return fibonacciV2(n - 1) + fibonacciV2(n - 2);
}
