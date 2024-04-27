#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//quadraticEquation

int main()
{
    //ax^2 + bx + c = 0
    //Cân bằng phương trình bậc 2
    //Nhập vào 3 số thức đại diện cho a,b,c
    //giả lập casio fx570++
    //căn bậc 2 => sqrt(a)
    //căn bậc 3 => pow(a, (float) 1/3)
    float a, b, c;
    printf("\nNhap a: ");
    scanf("%f", &a);
    printf("\nNhap b: ");
    scanf("%f", &b);
    printf("\nNhap c: ");
    scanf("%f", &c);

    float del = pow(b,2) - 4*a*c;
    if(a == 0){
        if(b== 0){ // tách ra 2 bước 1 bước b == 0, 1 bước b != 0;
            if(c == 0){
                printf("\nPhuong trinh vo so nghiem");
            }else{
                printf("\nPhuong trinh vo nghiem");
            }
        }else{
             printf("\nPhuong trinh co nghiem x = %f", -c/b);
        }
    }else{
        if(del > 0){
            printf("\nPhuong trinh co 2 nghiem phan biet x1 = %f, x2 = %f",(-b + sqrt(del)/(2*a)),(-b - sqrt(del)/(2*a)));
        }else if(del == 0){
            printf("\nPhuong trinh co nghiem kep x = %f", -b/(2*a));
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }
    return 0;
}
