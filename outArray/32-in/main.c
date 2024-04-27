#include <stdio.h>
#include <stdlib.h>


//32-inputOutputArray
int main()
{
    int arr[100];
    int size;
    //nhập
    printf("\nNhap kich thuoc di: ");
    scanf("%d",&size);//6

    for(int i = 0; i <= size - 1;i++){
        printf("\nArr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    //in ra màn hình
    printf("\nMang vua nhap ne: ");
    for(int i = 0;i <= size - 1;i++){
        printf("%5d", arr[i]);
    }
    return 0;
}



















































