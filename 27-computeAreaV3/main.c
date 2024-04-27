#include <stdio.h>
#include <stdlib.h>
//27-computeAreaV3

int computeAreaV3(void);
int main()
{
    //int area1 = computeAreaV3();
    printf("\nArea = %d", computeAreaV3());// như này cũng được nhưng nên hứng nhé
    return 0;
}
int computeAreaV3(void){
    int width, height;
    int area = 0;
    printf("\nInput w: ");
    scanf("%d", &width);
    printf("\nInput h: ");
    scanf("%d", &height);
    area = width * height;
    return area;
}
