#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int findFirstIndex(int arr[], int size, int key);
void findListArray(int arr[], int size, int key,int arrResult[], int* sizeArrResult);

int main()
{
    int arr[MAX], arrResult[MAX];
    int size, sizeArrResult;
    inputArray(arr,&size);
    printf("\nArr : ");
    outputArray(arr,size);
    int key;
    printf("\nInput key = ");
    scanf("%d",&key);
/*    int pos = findFirstIndex(arr,size,key);
    if(pos>=0){
        printf("\n%d is index %d", key, pos);
    }else{
        printf("\nDon't have in array");
    }
*/
    findListArray(arr,size,key,arrResult,&sizeArrResult);
    if(sizeArrResult == 0){
        printf("\n%d ko ton tai trong mang",key);
    }else{
        printf("\n%d ton tai trong mang",key);
        printf("\nArrResult : ");
        outputArray(arrResult, sizeArrResult);
    }
    return 0;
}


void inputArray(int arr[], int* size){
     printf("Input size = ");
     scanf("%d",size);
     for(int i = 0; i<= *size-1; i++){
         printf("arr[%d] = ",i);
         scanf("%d",&arr[i]);
     }
}

void outputArray(int arr[], int size){
     for(int i = 0; i<= size-1;i++){
         printf("%5d",arr[i]);
     }
}


int findFirstIndex(int arr[], int size, int key){
    for(int i = 0; i<=size-1;i++){
        if(arr[i] == key) return i;
    }
    return -1;
}


void findListArray(int arr[], int size, int key, int arrResult[], int* sizeArrResult){
     *sizeArrResult = 0;
     for( int i = 0; i <= size-1;i++){
         if(arr[i]==key){
            arrResult[*sizeArrResult] = i;
            (*sizeArrResult)++;
         }
     }
}
/*
  findFirstIndex;
  f(arr[], key)
  xét xem key có tồn tại trong ar hay ko
  nếu có return ra vị trí phát hiện

  findListIndex;
  f(arr[], key, arrResult[])
  arrResult lưu các vị trí tìm đc key trong mảng
  khi arr[i] == key
  thì nhét  i vào arrResult

  arrayInArray;
*/
