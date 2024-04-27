#include <stdio.h>
#include <stdlib.h>

//24-printPattern
/*
    *******
    *-----*
    *-----*
    *-----*
    *******
*/
int main()
{
    int height, width;
    printf("\nNhap height: ");
    scanf("%d", &height);
    fflush(stdin);

    printf("\nNhap width: ");
    scanf("%d", &width);
    fflush(stdin);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){

                printf(" *");

        }
        printf("\n");
    }
    return 0;
}
