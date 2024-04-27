#include <stdio.h>
#include <stdlib.h>
//43- Delete Array Sub In Array
const int MAX = 100;
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int spilceArray(int arr[], int* size, int pos, int amount);
int arrayInArray(int arr[], int size, int arrS[], int sizeS);
int arrayInArrayV2(int arr[], int size, int arrS[], int sizeS);
void delSubInArray(int arr[], int* size, int arrS[],int sizeS);
void sort(int arr[], int size);
int main()
{
    int arr[] = {2,1,1,3,4,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arrS[] = {1,3,4};
    int sizeS = sizeof(arrS)/sizeof(arrS[0]);
    printf("\nArr : ");
    outputArray(arr,size);
    spilceArray(arr,&size,3,3);
    //delSubInArray(arr,&size,arrS,sizeS);
    //sort(arr,size);
    printf("\nArr : ");
    outputArray(arr,size);
    return 0;
}

void inputArray(int arr[], int* size){
     printf("Input size = ");
     scanf("%d",size);
     for(int i = 0; i <= *size - 1; i++){
         printf("arr[%d] = ",i);
         scanf("%d",&arr[i]);
     }
}

void outputArray(int arr[], int size){
     for(int i = 0; i <= size - 1; i++){
         printf("%5d",arr[i]);
     }
}

int spilceArray(int arr[] ,int* size, int pos, int amount){
    if(pos < 0 || pos > *size - 1) return 0;//nếu ko xóa đc thì return
    for(int i = pos; i <= *size - 1 ; i++){
        arr[i]= arr[i+amount];
    }
    (*size)-=amount;
}

int arrayInArray(int arr[], int size, int arrS[], int sizeS){
    for(int i = 0; i <= size - 1; i++){//duyệt gốc
        // hỏi xem có pt nào bằng pt đầu của ArrS
        if(arr[i] == arrS[0]){
             for(int j = 0; j <= sizeS - 1; j++){
                 if(arr[i+j] != arrS[j]) break;
                 else{
                      if(j == sizeS - 1) return i;
                 }
             }
        }
    }
    return -1;
}

int arrayInArrayV2(int arr[], int size, int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}

void delSubInArray(int arr[], int* size, int arrS[],int sizeS){
     while(spilceArray(arr, size, arrayInArrayV2(arr, *size, arrS, sizeS), sizeS));
}


void sort(int arr[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int splice(int arr[], int* size, int pos, int amout){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amout;
}
