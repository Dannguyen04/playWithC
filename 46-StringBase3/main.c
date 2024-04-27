#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///46- String base
int spliceStr(char str[], int pos, int amount);
int removeDup(char str[]);
int removeKey(char str[], char key);
int strInStr(char str[], char sub[]);
void delSubInStr(char str[], char sub[]);
int main()
{
    char str[100] = "xin cchaohao ei";
    char sub[100] = "chao";
    //strlen(str);
    //strcpy(str1, str2); //str1 copy str2
    //strcat(str1,str2); //str1 nối str2
    //strrev(str):// đảo ngược
    //strcmp(str1,str2); // so sánh str1 thành str2
    //strlwr|strupr
    //removeKey(str,'a');
    delSubInStr(str,sub);
    printf("\nString : %s",str);
    return 0;
}
/// trong for có hành động xóa ko dùng size trực tiếp
///trong for for có k có hành động xóa dùng size gián tiếp

int spliceStr(char str[], int pos, int amount){
     int size  = strlen(str);
     if(pos < 0 || pos > size - 1) return 0;
     for(int i = pos; i <= size - 1; i++){
         str[i] = str[i+amount];
     }
     str[size - amount] = 0;
     return 1;
}

int removeDup(char str[]){
    int count = 0;
    for(int i = 0; i <= strlen(str) - 2; i++){
        for(int j = i + 1; j <= strlen(str) - 1; j++){
            if(str[i] == str[j]){
                 spliceStr(str,j,1);
                 j--;/// lùi lấy đà
                 count++;
            }
        }
    }

    return count;
}

int removeKey(char str[], char key){
    int count = 0;
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == key){
            spliceStr(str,i,1);
            i--;
            count++;
        }
    }
    return count;
}

int strInStr(char str[], char sub[]){
    int check = 0;
    int size  = strlen(str);
    int sizeS = strlen(sub);
    for(int i = 0; i <= size - 1; i++){
        if(str[i]==sub[check]){
            if(check == sizeS - 1) return i - check;
            check++;
        }else{
            i-=check;
            check = 0;
        }
    }
    return -1;
}

void delSubInStr(char str[], char sub[]){
     while(spliceStr(str, strInStr(str,sub), strlen(sub)));
}
