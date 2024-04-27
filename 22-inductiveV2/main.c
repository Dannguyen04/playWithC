#include <stdio.h>
#include <stdlib.h>

//22-inductiveV2

int main()
{
    int n;
    char buffer;
    do{
        printf("\nInput number: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 1){
            printf("\nInput again !!");
        }
    }while(buffer != 10 || n < 1);
    //có n là 1 số nguyên  >= 1
    int sum = 0;
    float result = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
        result += (float) 1/sum; // 2 cách viết pow(sum,-1) or 1.0/sum
    }
    printf("\nResult = %.2f", result);
    return 0;
}
