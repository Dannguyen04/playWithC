#include <stdio.h>
#include <stdlib.h>
//Q6.
const int MAX = 100;
void inputArray(int array[], int *size );
void outputArray(int array[], int size);
int countPrime(int array[], int size);
int checkPrime(int number);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr,&size);
    printf("\nMang vua nhap ne: ");
    outputArray(arr, size);
    printf("\nSo luong so nguyen to: %d", countPrime(arr,size));
    return 0;
}
int countPrime(int array[], int size){
    int count =0;
     for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
            count++;
        }
     }
     return count;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1;i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
void inputArray(int array[], int *size){
    printf("\nXin kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1;i++ ){
        printf("\nNhap Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1;i++ ){
        printf("%5d", array[i]);
    }
}
