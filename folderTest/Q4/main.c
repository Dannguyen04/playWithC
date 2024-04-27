#include <stdio.h>
#include <stdlib.h>

// Q4-
float inductive(int n);
int main()
{
    int n;
    printf("\nNhap number: ");
    scanf("%d", &n);
    double kq = inductive(n);
    printf("\nKet qua la %lf", inductive(n));
    return 0;
}

float inductive(int number){
    int sum = 0;
    float result = 0;
    for (int i = 1; i <= number; i++){
        sum += i;
        result += (float) 1/sum;
    }
    return result;
}
