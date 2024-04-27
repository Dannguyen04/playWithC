#include <stdio.h>
#include <stdlib.h>


//19- sum all element number
// nhập vào 1 số nguyên dương n
//tính tổng các đơn vị của số đó
//vd:
//n = 1234:
//result = 10;
int main()
{
    int n,sum = 0;
    char buffer;

    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        if(buffer != 10 || n < 0){
            printf("\nInput again");
        }
    }while(buffer != 10 || n < 0);

    /*
    for(;;){
        sum += n % 10 ;
        n = n/10;
        if(n == 0){
            break;
        }
    }
     printf("Sum = %d", sum);
     */

     while(n != 0){
        sum += n % 10;
        n = n / 10;
     }
     printf("sum = %d", sum);
    return 0;
}
