#include <stdio.h>
#include <stdlib.h>

//countEven
/*Nhập vào 2 số nguyên lần lượt là start và end
in ra màn hình các số trong khoảng từ start đến end

vd:
nhập start:-2
nhập end:6
-2 -1 0 1 2 3 4 5 6
*/
int main()
{

    int start, end;

    printf("\nNhap vao con so nguyen start: ");
    scanf("%d",&start);

    printf("\nNhap vao con so nguyen end: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int i = start; i <= end; i++){
        printf("%5d",i);
    }
    //in ra các số chẳn trong khoản đó đi
    for(int i = start; i <= end; i++){
            if(i % 2 == 0){
               printf("%5d",i);
            }
    }
    //tính tổng c số trong khoảng
    // vd: start =1, end = 5 => sum = 1 + 2 + 3 + 4 + 5
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    printf("\nSum = %d",sum);

    return 0;
}
