#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    if(condition){
        command;
        }else if(condition){
        command;}
    */
    int car =7;
    printf("\nSai Gon");
    printf("\nCao toc lien Khuong");
    if(car >= 7){
        printf("\ndi deo pern");
    } else if(car == 7){
        printf("\ndi deo sacom");
    } else{
        printf("\ndi deo mimosa");
    }
    // bàn riêng về mệnh đề so sánh
    //comparision operator: toán tử so sánh
    //==: so sánh bằng
    //!= so sánh khác
    // > < >= <=
    //mathetic operator: toán tử toán học
    //+ - * / %
    //int a = 200;
    //muốn tăng a lên 300 thì làm sao
    //a+=300;
    //tăng lên 1 hoặc giảm 1 thì a++; và a--;
    int age=25;
    int money=100;
    /*
    if(age>=18){
        //gặp a bảo vệ thứ 2
        if(money > 300){
            printf("\nWelcome");
        }else{
            printf("\nCut");
        }
    }else{
        printf("\nBye Bye dung vao");
        }
        */
     if(age >= 18 && money > 300){
        printf("\nmoi vao");
     }else{
        printf("\nCut nha");
     }
     //logical operator: toan tu logic
     //and - &&: 2 menh de true la thoa
     //      &&: đi tìm false, tìm dc sẽ dừng, &: như thằng kia nhưng false thì vẫn đi tiếp
     //or    ||: chỉ cần 1 true là thoả
     //      ||: đi tìm true, tìm dc là đừng ; |: như thằng kia nhưng true thì vẫn đi tiếp
     int a = 10;
     int b = 5;
     if(a == 10 & b++ < 2){
        printf("\nTrue a = %d, b = %d", a, b);

     }else{
        printf("\nFalse a = %d, b = %d", a, b);
     }
    return 0;
}
