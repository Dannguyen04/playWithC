#include <stdio.h>
#include <stdlib.h>
const int MAX =100;
//41 - insert Array
void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
void insteadArray(int arr[], int pos, int key);
int insertArray(int arr[], int* size, int pos, int key);
int deleteArray(int arr[], int* size, int pos);
int checkAnna(int arr[], int size);

int main()
{
    int arr[MAX];
    int size;
    inputArray(arr,&size);
    printf("\narr : ");
    outputArray(arr,size);

    int result = checkAnna(arr,size);
    if(result == 0){
        printf("\nArray is not Anna");
    }else {
        printf("\nArray is Anna");
        outputArray(arr,size);
    }
    return 0;
}
// do not edit here
void inputArray(int arr[], int* size){
     printf("Input size : ");
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


void insteadArray(int arr[], int pos, int key){
     arr[pos] = key;
}


int insertArray(int arr[], int* size, int pos, int key){
    //edit your code in here
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = key;
    (*size)++;
    return 1;
}


int deleteArray(int arr[], int* size, int pos){
     int value = arr[pos];
     for(int i = pos; i <= *size - 1; i++){
         arr[i] = arr[i+1];
     }
     (*size)--;
     return value;
}

/*check anna(arr[])
  kiểm tra xem array có đối xứng ko
*/


int checkAnna(int arr[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        if(arr[i] != arr[size-1-i]) return 0;
    }
    return 1;
}
