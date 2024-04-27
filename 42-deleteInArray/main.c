#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//42-deleteInArray

void inputArray(int arr[], int* size);
void outputArray(int arr[], int size);
int removeKeyInArray(int arr[], int* size, int key);
int removeKeyInArrayV2(int arr[], int* size, int key);
int deleteByPos(int arr[], int* size, int pos);
int search(int arr[], int size, int key);
int removeDuplicate(int arr[], int* size);
int removeDuplicateV2(int arr[], int* size);
void insertArrayIntoArray(int arr[], int* size, int arrS[], int sizeS, int pos);
int main()
{
    int arr[] = {2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int arrS[] = {1,3,5};
    int sizeS = sizeof(arrS)/sizeof(arrS[0]);
    printf("\nArr : ");
    outputArray(arr,size);

//    int amount = removeKeyInArrayV2(arr,&size,3);
    int amount = removeDuplicateV2(arr,&size);
    insertArrayIntoArray(arr,&size,arrS,sizeS,1);
    printf("\nArr : ");
    outputArray(arr,size);
    return 0;
}


void inputArray(int arr[], int* size){
     printf("\nInput size = ");
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

int removeKeyInArray(int arr[], int* size, int key){
    int tmp[MAX];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] != key){ // phần tử nào khác key thì nhét
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else {
            count++;
        }
    }
    // sau for tmp là mảng gốc nhưng ko có key , arr cpy tmp
    *size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[*size] = tmp[i];
        (*size)++;
    }

    return count;
}

int deleteByPos(int arr[], int* size, int pos){
     for(int i = pos; i <= *size - 1; i++){
                  arr[i] = arr[i+1];
             }
             (*size)--;
}

int removeKeyInArrayV2(int arr[], int* size, int key){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){//duyệt gốc
        if(arr[i] == key){//nếu phần tử nào bằng key
            count++;
            deleteByPos(arr, size, i);
            i--;// lùi lại lấy đà
            // hầu như các hành động xóa đều phải lùi lại 1 nhịp
        }
    }
    return count;
}

int search(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int removeDuplicate(int arr[], int* size){
    int tmp[MAX];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){// duyệt gốc
        int pos = search(tmp, sizeTmp, arr[i]);
        if(pos == -1){//ko tìm đc phần tử trong tmp
            tmp[sizeTmp] = arr[i];
            sizeTmp++;
        }else {
           count++;
        }
    }
    // cho arr copy tmp
    *size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        arr[*size] = tmp[i];
        (*size)++;
    }
    return count;
}

int removeDuplicateV2(int arr[], int* size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1 ; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                deleteByPos(arr, size, j);
                j--;// lùi lấy đà
                count++;
            }
        }
    }
    return count;
}

void insertArrayIntoArray(int arr[], int* size, int arrS[], int sizeS, int pos){
     for(int i = *size - 1; i >= pos ; i--){
         arr[i+sizeS] = arr[i];
     }
     (*size)+=sizeS;

     for(int i = 0; i <= sizeS - 1; i++){
         arr[pos] = arrS[i];
         pos++;
     }
}
