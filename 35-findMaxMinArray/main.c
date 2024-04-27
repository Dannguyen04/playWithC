#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int maxArray(int array[], int size);
int minArray(int array[], int size);
int mulMaxMin(int array[], int size);

int main()
{
    int arr[MAX];
    int size;
    inputArray(arr,&size);
    printf("\nMang vua nhap: ");
    outputArray(arr,size);
    printf("\nSo lon nhat trong mang: %d", maxArray(arr,size));
    printf("\nSo nho nhat trong mang: %d", minArray(arr,size));
    printf("\nTich cua max va min: %d", mulMaxMin(arr,size));
    return 0;
}

int mulMaxMin(int array[], int size){
    return maxArray(array,size) * minArray(array,size);
}

int minArray(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1;i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int maxArray(int array[], int size){
    int max = array[0];
    for(int i = 0; i <= size - 1;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void inputArray(int array[], int *size){

    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i<=  *size -1 ; i++){
        printf("\nArray[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0; i<=  size -1 ; i++){
            printf("%5d", array[i]);
        }
}
