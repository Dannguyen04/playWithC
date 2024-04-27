#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///48 - StringWork2
int spliceStr(char str[], int pos, int amount);
void trim(char str[]);
void validName(char str[]);
void revWord(char str[]);
int main()
{
    char str[100] = "xin chao ban";
    //validName
    //revWord(str);
    printf("\nName : %s",str);
    char studentList[50][100] = {"Hue",
                                 "Lan",
                                 "Tra",
                                 "Cuc",
                                 "Dao"};
    printf("\nstr : %s", studentList[2]);
    printf("\nstr : %c", studentList[2][1]);
    return 0;
}

int spliceStr(char str[], int pos, int amount){
    int size = strlen(str);
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size - amount] = 0;
}

void trim(char str[]){
     for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i+1] == 32){
            spliceStr(str,i,1);
            i--;
        }
     }
     if(str[0] == 32) spliceStr(str,0,1);
     if(str[strlen(str) - 1] == 32) spliceStr(str,strlen(str),1);
}

void validName(char str[]){
     trim(str);// chuỗi sẽ gọn gàng; lE hO dIeP
     strlwr(str); //le ho diep
     int size = strlen(str);
     for(int i = 0; i <= size - 1; i++){
         if(str[i] == 32){
             if(str[i + 1] >= 'a' && str[i + 1] <= 'z'){
                  str[i + 1] -= 32;
             }
         }
     }

     if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
     }
}

void revWord(char str[]){
     char tmp[100]="";//chuỗi lưu bị tách       int sizeTmp = strlen()
     strrev(str); //nab oahc nix
     int pos = 0;// biến lưu vị trí để đảo
     int size = strlen(str);
     int sizeTmp = 0;
     char result[100] ="";// chuỗ lui kết quả cuối cungg
     while(pos <= size - 1){
          tmp[0] = 0;
          sizeTmp = 0;
          for(int i = pos; i <= size - 1; i++){
              pos++;
              if(str[i] != 32){
                 tmp[sizeTmp] = str[i];
                 sizeTmp++;
              }else break;
          }
          tmp[sizeTmp] = 0;
          strrev(tmp);
          strcat(result, tmp);
          strcat(result," ");
    }
    strcpy(str, result);
    trim(str);
}
//str :"xin chao ban"
//     "ban chao xin"
