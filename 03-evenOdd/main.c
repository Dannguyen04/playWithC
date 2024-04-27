#include <stdio.h>
#include <stdlib.h>

//03-evenOdd
/*
   xin người dùng 1 số nguyên dương, kiểm tra xem
   số đó là chẵn hay lẻ
*/
int main()
{
    /*
    int number;
    printf("\nNumber la: ");
    scanf("%d",&number);

    if(number % 2 == 0){
        printf("day la %d so chan", number);
    } else{
        printf("day la %d so le", number);
    }
    */
    //-------------------------------------------
    //giải bt về nhà
    int a,b,c;
    printf("\nNhap a: ");
    scanf("%d",&a);
    printf("\nNhap b: ");
    scanf("%d",&b);
    printf("\nNhap c: ");
    scanf("%d",&c);
    if(a+b>c && a+c>b && c+b>a){
        if(a == b || b == c || a == c){
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(b,2) + pow(a,2)){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(b,2) + pow(a,2)){
            printf("\nTam giac vuong");
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nko phai tam giac");
    }

    return 0;
}
//bt về nhà
/*
    Xin người dùng nhập từ bàn phím độ dài 3 cạnh lần lượt
    là a,b,c
    từ 3 độ dài đó ktra xem
    a,b,c có tạo thành tam giác hay ko?
    nếu có thì nó là tam giác gì:
    + cân : cân      đều     vuông cân
    + vuông
    + thường
*/
