#include <stdio.h>
#include <stdlib.h>

//TriangleType

int main()
{
    double a,b,c;

    printf("\nNhap a: ");
    scanf("%lf", &a);
    printf("\nNhap b: ");
    scanf("%lf", &b);
    printf("\nNhap c: ");
    scanf("%lf", &c);

    if(a + b > c && a + c > b && b + c > a){
        if(a == b || b == c || a==c){
            if( a == b && b == c){
                printf("\nDay la tam giac deu");
            }else if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2)){
                printf("\nDay la tam giac vuong can");
            }else{
                printf("\nDay la tam giac can");
            }
        }else if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2)){
            printf("\nDay la tam giac vuong");
        }else{
            printf("\nDay la tam giac thuong");
        }
    }else{
        printf("\nEo phai tam giac ok :)");
    }

    return 0;
}
