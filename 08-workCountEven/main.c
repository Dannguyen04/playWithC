#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;

    printf("1.In ra cac so le trong khoang");

    printf("\nNhap Start: ");
    scanf("%d", &start);
    printf("\nNhap End: ");
    scanf("%d", &end);

    if(start > end){
       int tmp = start;
       start = end;
       end = tmp;
    }

    printf("\nSo le trong khoang ne:");
    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            printf("%5d", i);
        }
    }

    printf("\n\n2.Tinh tong cac so chan trong khoang");

    int sumEven = 0;
    for(int i = start; i <= end; i++){
        if( i % 2 == 0){
            sumEven+= i;
        }
    }
    printf("\n\nTong cac so chan ne: ");
    printf("%d",sumEven);

    printf("\n\n3.Dem xem co bao nhieu so trong khoang");

    int count = 0;
    for(int i = start; i <= end; i++){
        count++;
    }
    printf("\nCac so trong khoang: ");
    printf("%d", count);

    printf("\n\n4.Dem xem co bao nhieu co le trong khoang");

    int count1 = 0;
    for(int i = start; i <= end; i++){
            if(i % 2 !=0){
                count1++;
            }
    }
    printf("\nCac so le trong khoang: ");
    printf("5%d", count1);
    return 0;
}
