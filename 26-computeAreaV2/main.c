#include <stdio.h>
#include <stdlib.h>

// 26- computeAreaV2
void computAreaV2(int w, int h);
int main()
{
    int w1,h1;
    printf("\nInput w: ");
    scanf("%d", &w1);
    printf("\nInput h: ");
    scanf("%d", &h1);
    computAreaV2(w1,h1);
    return 0;
}
void computAreaV2(int width, int heighth){
    int area;
    area = width * heighth;
    printf("\nArea = %d", area);
}
