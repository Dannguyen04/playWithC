 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
///49-stringWork3
void split(char str[], char key,char result[][100], int* sizeR);
void join(char strList[][100], int sizeList, char key, char result[]);
void sort(char strList[][100], int sizeList);
int main()
{
    char str[100] = "diep-1999-10-SE";
    printf("%s",str);
    char result[50][100];
    int sizeR = 0;
    split(str, '-', result, &sizeR);
    //join(result,sizeR,'-',str);
    for(int i = 0; i <= sizeR - 1; i++){
        printf("\n'%s'",result[i]);
    }
    join(result,sizeR,'+',str);
    printf("\nstr = '%s'",str);

    char nameList[50][100] = {"Cuong","Dung","An","Binh","Em"};
    int sizeList = 5;
    sort(nameList, sizeList);
    for(int i = 0; i <= sizeList - 1; i++){
        printf("\n '%s'",nameList[i]);
    }
    return 0;
}

void split(char str[], char key,char result[][100], int* sizeR){
     *sizeR = 0;// xóa mảng  kết quả trước
     int pos = 0;
     char tmp[100] = "";//reset mảng
     int sizeTmp = 0;
     int size =strlen(str);
     while(pos <= size - 1){
           tmp[0] = 0;
           sizeTmp = 0;
           for(int i = pos; i <= size - 1; i++){
               pos++;
               if(str[i] != key){
                   tmp[sizeTmp] = str[i];
                   sizeTmp++;
               }else break;
           }
            tmp[sizeTmp] = 0; //xóa ở vị trí cuối cùng
           // nhét tmp vào mảng result
           strcpy(result[*sizeR], tmp);
           (*sizeR)++;
     }
}

void join(char strList[][100], int sizeList, char key, char result[]){
         result[0] = '\0';
         char tmp[100] = "n"; // đổi ký tự thành chuỗi
         tmp[0] = key;
         for(int i = 0; i <= sizeList - 1; i++){
             strcat(result,strList[i]);// nối result với str[i] // diep  -> diep+1999  ->diep+1999+10  ->diep+1999+10+SE
             strcat(result,tmp);                                // diep+ -> diep+1999+ ->diep+1999+10+ ->diep+1999+10+SE+
            }//diep+1999+10+se+
         result[strlen(result) - 1] = '\0';
}

void sort(char strList[][100], int sizeList){
     for(int i = 0; i <= sizeList - 2; i++){
         for(int j = i + 1; j <= sizeList - 1; j++){
             if(strcmp(strList[i],strList[j]) == 1){
                 char tmp[100] = "";
                 strcpy(tmp, strList[i]);
                 strcpy(strList[i], strList[j]);
                 strcpy(strList[j], tmp);
             }
         }
     }
}
