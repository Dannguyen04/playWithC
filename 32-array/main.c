#include <stdio.h>
#include <stdlib.h>

// 32-array
int main()
{
    int arr[6] = {11, 7, 9};
    // tạo mảng kiểu int có 6 phần tử
    // tạo 6 biến cùng kiểu int cùng tên arr
    // arr[0] -> arr[5];

    // in ra các giá trị trong mảng
    for (int i = 0; i <= 5; i++)
    {
        printf("%5d", arr[i]);
    }
    // in ra gía trị của arr[0]
    printf("\nArr[0]= %d", arr[0]);
    // in ra gía trị của arr[1]
    printf("\nArr[1]= %d", arr[1]);
    // in ra địa chỉ của arr[0]
    printf("\nArr[0]= %d", &arr[0]);
    // in ra địa chỉ của arr[1]
    printf("\nArr[1]= %d", &arr[1]);
    // in ra thử giá trị của arr
    printf("\nArr = %d", arr);
    // arr là tên của mảng
    // arr lưu địa chỉ của biến đầu tiên trong mảng
    //==> arr là 1 con trỏ đặc biệt
    // lưu dịa chỉ của phần tử đầu tiên
    // dựa vào cơ chế liền kề cùng kiểu
    // nó có thể trỏ sang các phần tử còn lại
    return 0;
}
