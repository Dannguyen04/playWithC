#include <stdio.h>
#include <stdlib.h>

//27- computeArea
//nhập vào w,h
//tính diện tích hình chữ nhật bằng 4v

void computeAreaV1(void);

int main()
{
    computeAreaV1();
    return 0;
}

void computeAreaV1(void){
    int width, heighth;
    int area = 0;

    printf("\nInput w: ");
    scanf("%d", &width);
    printf("\nInput h: ");
    scanf("%d", &heighth);

    area = width * heighth;

    printf("\nArea = %d", area);
}
