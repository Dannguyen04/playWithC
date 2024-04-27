#include <stdio.h>
#include <stdlib.h>


//20- printFormat
//Nhập vào 1 ký tự alphabet
//in ra màn hình ký tự đó dưới dạng:
//số,ký tự, octal
int main()
{
    char c;
    do{
        printf("\nInput char: ");
        scanf("%c", &c);
        if(c < 'a' || c > 'z'){
            printf("\nInput alphabet");
        }
    }while(c < 'a' || c > 'z');

    printf("%d %c %o", c, c, c);

    return 0;
}
