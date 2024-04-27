#include <stdio.h>
#include <stdlib.h>

//Q3.
int sumEven(int start, int end);
int main()
{
    int s,e;
    printf("\nNhap start: ");
    scanf("%d", &s);
    printf("\nNhap end: ");
    scanf("%d", &e);
    if(s > e){
        int tmp = s;
        s = e;
        e = tmp;
    }
    printf("\nKet qua la %d", sumEven(s,e));
    return 0;
}
int sumEven(int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
