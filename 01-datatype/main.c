#include <stdio.h>
#include <stdlib.h>


int main()
{
    char firstCharOfName = '1'+'2';
    int age = 19;
    float diem = 9.8;
    printf("A Diep rat chi la xau trai :))");
    printf("\nky tu dau ten trong ten: %c",firstCharOfName);//cammelCase (cú pháp con lạc đà)
    printf("\nage cua toi: %d",age);
    printf("\nDiem cua toi: %.2f",diem);
    printf("\ndia chi ne: %u",&age);
    int numb='A';
    char ch = 66;
    printf("\n numb la: %d",numb);
    printf("\n ky tu la: %c",ch);
    //---------------------------
    int numb1=10,numb2=3;
    float  c=(float)numb1/numb2;
    printf("\nIn ra tong so nguyen: %f",c);
    //---------------------------
    //cach 2
    int a=10,b=3;
    printf("\nTong cac so nguyen: %d",a+b);
    //---------------------------
    int n1=20;
    int sting =10;
    int c1;
    c1=n1;
    n1=sting;
    sting = c1;
    printf("\nn1: %d, sting: %d",n1,sting);

    return 0;
}

