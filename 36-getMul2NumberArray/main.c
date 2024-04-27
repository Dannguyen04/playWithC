#include <stdio.h>
#include <stdlib.h>

//36-getHighestMul2NumberArray
const int MAX = 100;
void input(int array[], int *size);
void output(int array[], int size);
int getHighestMul2NumberArray(int array[], int size);
int main()
{
    int arr[MAX];
    int size;
    inputArray(arr,&size);
    printf("\nMang vua nhap ne: ");
    outputArray(arr,size);
    printf("\ngetHighestMul2NumberArray: %d", getHighestMul2NumberArray(arr,size));
    return 0;
}

int getHighestMul2NumberArray(int array[], int size){
    int max = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i]*array[j] > max){
                max = array[i]*array[j];
            }
        }
    }
    return max;
}

void inputArray(int array[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
