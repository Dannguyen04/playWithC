#include <stdio.h>
#include <stdlib.h>

// Q5
void swap(int *number1, int *number2);
int main()
{
    int num1, num2;
    printf("\nNhap number1: ");
    scanf("%d", &num1);
    printf("\nNhap number2: ");
    scanf("%d", &num2);
    swap(&num1,&num2);
    printf("\nNumber 1 = %d, number 2 = %d", num1, num2);

    return 0;
}
void swap(int *number1, int *number2){
    int tmp = *number1;
    *number1 = *number2;
    *number2 = tmp;
}
