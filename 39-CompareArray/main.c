#include <stdio.h>
#include <stdlib.h>
const int MAX =100;
//39-compare array

void inputArray(int arr[],int* size);
void outputArray(int arr[], int size);
int cmpArray(int arr1[], int arr2[], int size1, int size2);
int main()
{
    int arr1[MAX], arr2[MAX];
    int size1, size2;
    inputArray(arr1,&size1);
    printf("\narr1 : ");
    outputArray(arr1,size1);

    inputArray(arr2,&size2);
    printf("\narr2 : ");
    outputArray(arr2,size2);
    int result = cmpArray(arr1,arr2,size1,size2);
    if(result > 0) printf("\nArr1 > Arr2");
    else if(result < 0) printf("\nArr1 < Arr2");
    else printf("\nArr1 = Arr2");
    return 0;
}


void inputArray(int arr[],int* size){
     printf("\nInput size = ");
     scanf("%d",size);
     for(int i = 0; i<=*size-1;i++){
         printf("arr[%d] = ",i);
         scanf("%d",&arr[i]);
     }
}

void outputArray(int arr[], int size){
     for(int i = 0; i<=size-1;i++){
         printf("%5d",arr[i]);
     }
}


int cmpArray(int arr1[], int arr2[], int size1, int size2){
     int size = size1 < size2 ? size1 : size2;
     // ? là if đang hỏi
     // : là else
     for(int i = 0; i <= size-1; i++){
         if(arr1[i] > arr2[i]) return 1;
         else if(arr1[i] < arr2[i]) return -1;
     }
     // size
     if(size1 > size2) return 1;
     else if(size1 < size2) return -1;
     else return 0;
}
