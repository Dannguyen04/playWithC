#include <stdio.h>
#include <stdlib.h>


/*
    17-Time Caculation

*/
int main()
{
    int s = 0, h = 0, m = 0,d = 0;
    char buffer;

    do{
        printf("\nInput s: ");
        scanf("%d", &s);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || s < 0){
            printf("\nInput positive number");
        }
    }while(buffer != 10 || s < 0);

    h = s/3600;
    m = s%3600/60;
    s = s%3600%60;

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
