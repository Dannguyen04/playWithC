#include <stdio.h>
#include <stdlib.h>

//31 pointer
int main()
{
    // a là biến bth [value, address]
    int a = 20;
    //z là biến con trỏ [value, address, hook]
    int *z = &a;
    //con trỏ z đã trỏ vào vùng nhớ của a
    //in ra giá trị của biến a
    printf("\nGia tri cua a %d", a);
    //in ra địa chỉ của biến a
    printf("\nDia chi cua a %u", &a);
    //in ra gía trị của biến z
    printf("\nGia tri cua z %d", z);
    //in ra địa chỉ của biến z
    printf("\nDia chi cua z %u", &z);
    *z += 2;
    //điều khiển biến a tăng 2
    printf("\nGia tri cua a %d", a);
    return 0;
}
