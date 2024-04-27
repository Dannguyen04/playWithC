#include <stdio.h>
#include <stdlib.h>

//13-countPrime
//Nhập vào start và end
//in ra màn hình các số nguyên tố  trong khoảng từ start
//đến end
//vd:
//người dùng nhập start = -2 và end = 6
//Kiếm tra xem trong khoảng -2 -1 0 1 2 3 4 5 6
//trong đống đó số nào là số nguyên tố
//nếu là số nguyên tố thì in ra màn hình
int main()
{
    int start;
    int end;

    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int isPrime = 1;
    int count = 0;
    for(int i = start; i <= end ;i++){
        isPrime = 1;
        if( i >= 2){
            for(int j = 2; j <= i - 1;j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\nThis is prime: %d", i);
                count++;
            }//else{
               // printf("\nThis is not prime");
            //}
        }
    }
    if(count == 0){
        printf("\nKhong co so nguyen to trong khoang");
    }else{
        printf("\nCountPrime = %d",count);
    }
    return 0;
}
