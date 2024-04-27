#include <stdio.h>
#include <stdlib.h>

/*
    11-Fibonacii
    nhập vào 1 số nguyên dương n
    xuất ra màn hình số fibonacii thứ n
*/
int main()
{
    int prev = 0;
    int curr = 1;
    int result = 1;

    int n;

    printf("\nNhap n: ");
    scanf("%d", &n);

    //  0, 1, 1, 2, 3, 5, 8, 13,......
    for(int i = 1;i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("%d la so o vi tri thu %d", result , n);

    return 0;
}
