#include <stdio.h>
#include <stdlib.h>

//23-mulOddEven

//đề trường fpt
//Nhập vào số nguyên n >= 2;
//tính tích chẵn, lẻ trong khoảng từ 1 đến n - 1
//-----------------

int main()
{
    int n;
    char buffer;
    do{
        printf("\nInput number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 2){
            printf("\nInput again !!");
        }
    }while(buffer != 10 || n < 2);
    // có n từ 2 trở lên
    int p_even = 1, p_odd = 1;
    int c_even = 0, c_odd = 0;
    for(int i = 1; i <= n - 1; i++ ){
        if(i % 2 == 0){
            p_even *= i;
            c_even = 1;
        }else{
            p_odd *= i;
            c_odd = 1;
        }
    }
    p_even *= c_even;
    p_odd *= c_odd;

    printf("\nMulEven = %d", p_even);
    printf("\nMulOdd = %d", p_odd);
    return 0;
}
