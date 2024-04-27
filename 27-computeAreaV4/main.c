#include <stdio.h>
#include <stdlib.h>

//27-computeAreaV4

int computeAreaV4(int width,int heigth);
int main()
{
    int w1,h1;
    int area1 = 0;
    printf("\nInput w: ");
    scanf("%d", &w1);
    printf("\nInput h: ");
    scanf("%d", &h1);
    area1 = computeAreaV4(w1,h1);
    printf("\nArea = %d", area1);
    return 0;
}
int computeAreaV4(int width, int heigth){
    int area = width * heigth;
    return area;
}
