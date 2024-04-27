#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char buffer;//lưu phần dư trong buffer thật
    //ép nhập số nguyên
    while(1){
        do{
            printf("\nInput number: ");
            scanf("%d", &number);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10 || number < 0){
                printf("\nInput again !!");
            }
        }while(buffer != 10 || number < 0);

        if(number == 0){
            return;//break; vẫn đc vì nó dừng vòng lặp gần nhất là while, do while ko liên quan vì nó ko có quan hệ
        }
        //code đến đây là có number là số nguyên
        //ktra số nguyên tố
        if(number >= 2){
            int isPrime = 1;
            for(int i = 2; i <= number - 1; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
            }
            if(isPrime == 1){
                printf("\n%d is prime", number);
            }else{
                printf("\n%d is not prime",number);
            }
        }else{
            printf("\n%d is not prime", number);
        }
    }
    return 0;
}
