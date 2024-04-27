#include <stdio.h>
#include <stdlib.h>
/*
    31-swapFunction
    viết hàm gì cũng dc
    nhưng hàm phải nhận vào 2 biến n1,n2
    hoán vị giá trị của 2 biến đó
*/
void swap(int n1, int n2);
void swap2(int *n1, int *n2);
int main()
{
    int numb1 = 10, numb2 = 20;

    swap2(&numb1, &numb2);
    printf("\nnumb1 = %d, numb2 = %d", numb1, numb2);
    return 0;
}
//pass by value: truyền tham trị
// hàm đổi giá trị, bên ngoài k ảnh hưởng
// vì hàm chỉ tham khảo thôi
void swap(int n1, int n2){
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}
//pass by references : truyền tham chiếu
//bên trong trỏ bên ngoài
//bên trong thay đổi bên ngoài ảnh hưởng
void swap2(int *n1, int *n2){
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
