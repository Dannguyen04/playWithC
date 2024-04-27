#include <stdio.h>
#include <stdlib.h>
//Nhap vào 1 số nguyên, ktra xem số đó có phải là số nguyên tố hay ko,số nguyên tố là gì

int main()
{
    int n;

    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n >= 2){
        for(int i = 2; i <= n -1; i++){
            if( n % i == 0){
                printf("\n Day khong phai la so nguyen to");
                return;
            }
        }
        printf("\nDay la so nguyen to");
    }else{
        printf("\n Day ko phai la so nguyen to");
    }
    return 0;
}
