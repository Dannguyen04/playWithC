#include <stdio.h>
#include <stdlib.h>

/*
    09-inductiveResult
    nhập vào 1 số nguyên dương n
    xuất ra màn hình kq của
    1^n + 2^n + 3^n +...+ n^n
    hint: 2^5 => pow(2,5)
*/
int main()
{
    int n;
    int sum = 0;
    printf("\nNhap N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += pow(i, n);
    }

    printf("\nKet qua ne: ");
    printf("Sum = %d", sum);
    return 0;
}
