#include <stdio.h>
#include <stdlib.h>
//25-upperCase
//Nhập vào 1 kí tự
//sau đó in ra màn hình
//nếu là ký tự chữ thường thì viết hoa
//upperCase
int main()
{
    char ch;
    printf("\nInput ch: ");
    scanf("%c", &ch);
    fflush(stdin);
    if(ch >=97 && ch <= 122){
        ch -= 32;
    }
    printf("%c", ch);
    return 0;
}
