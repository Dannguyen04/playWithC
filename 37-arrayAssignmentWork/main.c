5
#include <stdio.h>
#include <stdlib.h>
    const int MAX = 100;

void inputArray(int arr[], int *size);
void outputArray(int arr[], int size);
void concatArrayV1(int arr1[], int size1, int arr2[], int size2, int arr3[], int *size3);
void reverseArrayV1(int arr[], int size);
void reverseArrayV2(int arr[], int size);

int main()
{
    /* int arrA[100] = {4, 6, 8};
     int sizeA = 3;
     int arrB[100] = {3, 5, 7};
     int sizeB = 3;
     int arrC[100] = {5, 5, 5, 5, 5};
     int sizeC = 5;
     int arr1[MAX], arr2[MAX], arr3[MAX];
     int size1, size2, size3;
     inputArray(arr1, &size1);
     inputArray(arr2, &size2);
     inputArray(arr3, &size3);
     outputArray(arr1, size1);
     outputArray(arr2, size2);
     outputArray(arr3, size3);
     printf("\nArrA:");
     outputArray(arrA,sizeA);
     printf("\nArrB:");
     outputArray(arrB,sizeB);
     printf("\nArrC:");
     outputArray(arrC,sizeC);
     concatArrayV1(arrA, sizeA, arrB, sizeB, arrC, &sizeC);
     printf("\nKet qua sau khi noi la : ");
     printf("\nArrA:");
     outputArray(arrA,sizeA);
     printf("\nArrB:");
     outputArray(arrB,sizeB);
     printf("\nArrC:");
     outputArray(arrC,sizeC);*/
    int arr[MAX];
    int size;
    inputArray(arr, &size);
    printf("\nArr : ");
    outputArray(arr, size);
    reverseArrayV2(arr, size);
    printf("\nAfter reverse : ");
    outputArray(arr, size);
    return 0;
}

void inputArray(int arr[], int *size)
{
    printf("\nInput size = ");
    scanf("%d", size);
    for (int i = 0; i <= *size - 1; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%5d", arr[i]);
    }
}

void concatArrayV1(int arr1[], int size1, int arr2[], int size2, int arr3[], int *size3)
{
    *size3 = 0; // xóa mảng 3
    // nhét arr1 vào arr3
    // nhét từng phần tử của arr1 vào arr3
    for (int i = 0; i <= size1 - 1; i++)
    {
        arr3[*size3] = arr1[i];
        (*size3)++;
    }

    for (int i = 0; i <= size2 - 1; i++)
    {
        arr3[*size3] = arr2[i];
        (*size3)++;
    }
}

void reverseArrayV1(int arr[], int size)
{
    int arrTmp[MAX];
    int sizeTmp = 0; // tạo mảng ko có gì hết
    // nhét arr vào tmp
    for (int i = size - 1; i >= 0; i--)
    {
        arrTmp[sizeTmp] = arr[i];
        sizeTmp++;
    }

    for (int i = 0; i <= size - 1; i++)
    {
        arr[i] = arrTmp[i];
    }
} // n*2

void reverseArrayV2(int arr[], int size)
{
    for (int i = 0; i <= size / 2 - 1; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
} // n/2
