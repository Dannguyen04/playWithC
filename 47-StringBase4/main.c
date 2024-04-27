#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//47-stringWork1
int spliceStr(char str[], int pos, int amount);
void getAlphaBet(char str[]);
void trim(char str[]);
void getVowel(char str[]);
int isVowel(char key);
int main()
{
    char str[100] = "uevbnmoraci";
    getVowelV2(str);
    printf("\nStr = '%s'",str);
    return 0;
}

void getAlphaBet(char str[]){
     for(int i = 0; i <= strlen(str) - 1; i++){
       ///if(!((str[i] >= 97 && str[i] <=122 ) || ( str[i] >= 65 && str[i] <= 90 )))
        if(( str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z' )){

        }else{
           spliceStr(str,i,1);
           i--;
        }
     }
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

void getVowel(char str[]){
     for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 'e' || str[i] == 'E' ||
           str[i] == 'u' || str[i] == 'U' ||
           str[i] == 'o' || str[i] == 'O' ||
           str[i] == 'a' || str[i] == 'A' ||
           str[i] == 'i' || str[i] == 'A' ){
               spliceStr(str,i,1);
               i--;
           }
     }
}

int isVowel(char key){
        if(key == 'e' || key == 'E' ||
           key == 'u' || key == 'U' ||
           key == 'o' || key == 'O' ||
           key == 'a' || key == 'A' ||
           key == 'i' || key == 'A' ){
               return 1;
           }
           return 0;
}

void getVowelV2(char str[]){
      int size = strlen(str);
      for(int i = 0; i <= size - 1; i++){
          if(isVowel(str[i])){
              spliceStr(str,i,1);
              i--;
          }
      }
}
