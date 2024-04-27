#include <stdio.h>
#include <stdlib.h>
//44-String : mảng lưu ký tự
//chuỗi,xâu
int strLenght(char str[]);
int main()
{
    char str[100];// '\0' dùng để định vị size
    printf("\nInput String : ");
    //scanf("%s", str);//regex
    gets(str);
    printf("\nString : %s do dai %d",str,strLenght(str));
    return 0;
}

	

/// lưu ý
/*
cần lưu "hello"
char str[6] = "hello\0"

"helloEm\0"
str[4] = 0 || str[4] = '\0'
*/
