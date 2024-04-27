#include <stdio.h>
#include <stdlib.h>


//32-in/outArrayFuncs
//viết hàm có funcs nhận vào 1 mảng
//và nhập giá trị cho mảng đó giúp mình
const int MAX = 100;
//constant = hằng số
// là 1 biến dc tạo và gán giá trị từ đầu
//sau đó ko dc quyền chỉnh sửa hoặc thay đổi giá trị
//underCore => maxSpeed(MAX_SPEED)
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
//viết hàm tính tổng các phần tử trong mảng
int sumArray(int array[], int size);
//viết hàm tính trung bình cộng các phần tử trong mảng
float avgArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    //hàm nhập mảng
    inputArray(arrMain, &sizeMain);
    //hàm xuất mảng
    printf("\nMang vua nhap :");
    outputArray(arrMain,sizeMain);
    printf("\nTong main = %d", sumArray(arrMain,sizeMain));
    printf("\nAVG main = %.2f", avgArray(arrMain,sizeMain));
    return 0;
}
float avgArray(int array[], int size){
    return (float) sumArray(array,size)/size;
}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i<=size -1;i++){
        sum+=array[i];
    }
    return sum;
}
void inputArray(int array[], int *size){
    //xin kích thước
    //nhập giá trị cho từng phần tử trong mảng
    printf("\nXin kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1;i++){
        printf("\nArr[%d] = ", i);
        scanf("%5d", &array[i]);
    }

}
//cách nhớ:
//nhập => địa chỉ => tên
//giá trị => *tên

void outputArray(int array[], int size){
    for(int i = 0 ;i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}


























































