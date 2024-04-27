#include <stdio.h>
#include <stdlib.h>

//forLoop
int main()
{
    /*
        for(khởi đầu; điều kiện thoát; bước nhảy){
            command;
        }
    */
    int i;
    for(i = 1; i <= 10; i+=2){
        printf("\n%d Nguyen The Hoang", i);
    }
    printf("\nI ne %d", i);
    return 0;
}
