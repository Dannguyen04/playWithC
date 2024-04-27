#include <stdio.h>
#include <stdlib.h>
const int MAX =100;
//40 divide Array
/* cắt mảng chính thành mảng nhỏ và lưu phần bị cắt vào 1 mảng khác
*/
void inputArray(int arr[], int* size);
void outputArray(int arr[],int size);
void divideArray(int arrMain[], int* sizeMain, int pos, int arrSub[], int* sizeSub);
void divideArrayV1(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2);

int main()
{
    int arr[MAX],arrSub1[MAX],arrSub2[MAX];
    int size,sizeSub1,sizeSub2;
    inputArray(arr,&size);
    printf("\narr : ");
    outputArray(arr,size);

    int pos;
    printf("\nInput pos = ");
    scanf("%d",&pos);

    divideArrayV1(arr, size, pos, arrSub1, &sizeSub1, arrSub2, &sizeSub2);
    printf("\nAfter divide");
    printf("\nArr : ");
    outputArray(arr,size);

    printf("\nArrSub1 :");
    outputArray(arrSub1,sizeSub1);

    printf("\nArrSub2 :");
    outputArray(arrSub2,sizeSub2);
    return 0;
}


void inputArray(int arr[], int* size){
     printf("\nInput size = ");
     scanf("%d",size);
     for(int i =0;i <= *size-1;i++){
         printf("arr[%d] = ",i);
         scanf("%d",&arr[i]);
     }
}

void outputArray(int arr[],int size){
     for(int i = 0; i <= size-1; i++){
         printf("%5d",arr[i]);
     }
}


void divideArray(int arr[], int* size, int pos, int arrSub[], int* sizeSub){
     *sizeSub = 0;
     for(int i = pos; i <= *size-1;i++){
         arrSub[*sizeSub] = arr[i];
         (*sizeSub)++;
     }
     *size= pos;
}


void divideArrayV1(int arrMain[], int sizeMain, int pos, int arrSub1[], int* sizeSub1, int arrSub2[], int* sizeSub2){
     *sizeSub1 = 0;
     *sizeSub2 = 0;
     for(int i = 0; i <= pos-1; i++){
         arrSub1[*sizeSub1]=arrMain[i];
         (*sizeSub1)++;
     }

     for(int i = pos; i<=sizeMain-1;i++){
         arrSub2[*sizeSub2] = arrMain[i];
         (*sizeSub2)++;
     }
}
