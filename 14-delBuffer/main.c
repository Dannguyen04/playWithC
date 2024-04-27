#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char ch;

    printf("\nNhap age: ");
    scanf("%d", &age);
    //fflush(stdin); //xoá buffer trước khi %c thấy
    printf("\nNhap ch: ");
    scanf("%c", &ch);

    //in ra
    printf("\nage ne %d", age);
    printf("\nch ne %c", ch);
    return 0;
}
