#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 100;
/// 50-studentManagement
/// sinh viên được tạo thành từ 5 thuộc tính
/// tạo 5 mảng cùng size để lưu trữ
/// mảng 2 chiều số
/// malloc, calloc => tạo mảng cấp phát động (mảng co giản)
///structure
void showMenu(void);
void addStudent(char id[][100], char firstName[][100], char lastName[][100],
                                          int yob[], float gpa[],int* size);

void printStudentList(char id[][100], char firstName[][100],
                      char lastName[][100],int yob[], float gpa[],int size);

int searchStudentByID(char id[][100], int size, char key[]);

void printStudent(char id[][100], char firstName[][100], char lastName[][100],
                                              int yob[], float gpa[],int pos);

void removeStudentByPos(char id[][100], char firstName[][100], char lastName[][100],
                                         int yob[], float gpa[],int pos, int* size);

void removeStudent(char id[][100], char firstName[][100], char lastName[][100],
                                int yob[], float gpa[], int* size, char key[]);

void searchStudent(char id[][100],char firstName[][100],char lastName[][100],
                                int yob[],float gpa[], int size, char key[]);

void printStudentHighestGpa(char id[][100],char firstName[][100],char lastName[][100],
                                                     int yob[],float gpa[], int size);

void sortByFNameACS(char firstName[][100], int size);

int main()
{
    /// khai báo cách thuộc tính
    char id[50][MAX];
    char firstName[50][MAX];
    char lastName[50][MAX];
    int yob[MAX];
    float gpa[MAX];
    int size = 0; ///kích thước chung
    int choice = 0;
    char key[MAX];
    char buffer;

    //bước chuẩn bị
    do{
        //in ra menu
        showMenu();
        // xin lựa chọn từ người dùng
        do{
           printf("\nInput your choice : ");
           scanf("%d",&choice);
           scanf("%c",&buffer);
           if(buffer != 10){
             printf("\nDo you know input the number!!!");
           }
        }while(buffer != 10);

        // xử lý choice
        switch(choice){
             case 1 : {
                 addStudent(id, firstName, lastName, yob, gpa, &size);
                 break;
             }
             case 2 : {
                 searchStudent(id,firstName, lastName, yob, gpa, size, key);
                 break;
             }
             case 3 : {
                 removeStudent(id, firstName, lastName, yob, gpa, &size, key);
                 break;
             }
             case 4 : {
                 printStudentHighestGpa(id, firstName, lastName, yob, gpa, size);
                 break;
             }
             case 5 : {
                 printStudentList(id, firstName, lastName, yob, gpa, size);
                 break;
             }
             case 6 : {
                 sortByFNameACS(firstName, size);
                 break;
             }
             case 7 : {
                 printf("\nCut ho!!!");
                 break;
             }
             default : {
                 printf("\nNgu vcl nhap lai di!!!");
                 break;
             }
        }
    }while(choice != 7);
    return 0;
}

//-----------------------------------------------------------------------------------------------------

void showMenu(void){
    printf("\n=========================================");
    printf("\n----Student management application!!!----");
    printf("\n1.Add new student!");
    printf("\n2.Search student by id!");
    printf("\n3.Delete student by id!");
    printf("\n4.Print highest gpa student list!");
    printf("\n5.Print student list!");
    printf("\n6.Sort student order by first name ascending");
    printf("\n7.Quit!");
}

void addStudent(char id[][100], char firstName[][100], char lastName[][100],int yob[], float gpa[],int* size){
     printf("\nAdd new student");

     printf("\nID : ");
     gets(id[*size]);
     fflush(stdin);

     printf("\nfirstName : ");
     gets(firstName[*size]);
     fflush(stdin);

     printf("\nlastName : ");
     gets(lastName[*size]);
     fflush(stdin);

     printf("\nyob : ");
     scanf("%d", &yob[*size]);
     fflush(stdin);

     printf("\ngpa : ");
     scanf("%f", &gpa[*size]);
     fflush(stdin);

     (*size)++;

     printf("\nAdding successfully");// thông báo cho ng dùng
}

void printStudentList(char id[][100], char firstName[][100], char lastName[][100],int yob[], float gpa[],int size){
     printf("\nPrint student List!!!");
     if(size == 0){
        printf("\nEmpty list!!!");
     }else{
        for(int i = 0; i <= size - 1; i++){
            printf("\n%-9s|%-9s|%-9s|%4d|%5.2f", id[i], firstName[i], lastName[i], yob[i], gpa[i]);
        }
     }
}

int searchStudentByID(char id[][100], int size, char key[]){
    for(int i = 0; i <= size - 1; i++){
        if(strcmp(id[i],key) == 0) return i;
    }
    return -1;
}

void searchStudent(char id[][100], char firstName[][100],char lastName[][100],
                                int yob[],float gpa[], int size, char key[]){
     key[0] = 0;
     printf("\nSearch infor student!");
     printf("\nInput ID : ");
     gets(key);
     fflush(stdin);
     int pos = searchStudentByID(id,size,key);
     if(pos == -1){
        printf("\nDeo tim thay thang ngu");
     }else{
     printStudent(id, firstName, lastName, yob, gpa, pos);
     }
}

void printStudent(char id[][100], char firstName[][100], char lastName[][100],int yob[], float gpa[],int pos){
        printf("\n%-9s|%-9s|%-9s|%4d|%5.2f", id[pos], firstName[pos], lastName[pos], yob[pos], gpa[pos]);
}

void removeStudentByPos(char id[][100], char firstName[][100], char lastName[][100],int yob[], float gpa[], int pos, int* size){
     for(int i = pos; i <= *size - 1; i++){
         strcpy(id[i], id[i + 1]);
         strcpy(firstName[i], firstName[i + 1]);
         strcpy(lastName[i], lastName[i + 1]);
         yob[i]= yob[i + 1];
         gpa[i] = gpa[i + 1];
     }
     (*size)--;
}

void removeStudent(char id[][100], char firstName[][100], char lastName[][100],int yob[],
                                             float gpa[], int* size, char key[]){
     key[0] = 0;
     printf("\nRemove student");
     printf("\nInput ID : ");
     gets(key);
     fflush(stdin);
     int pos = searchStudentByID(id,*size,key);
     if(pos == -1){
         printf("\nDeo tim thay thang ngu");
     }else{
         printf("\nSinh vien bi xoa la : ");
         printStudent(id, firstName, lastName, yob, gpa, pos);
         removeStudentByPos(id, firstName, lastName, yob, gpa, pos, size);
     }
}

void printStudentHighestGpa(char id[][100],char firstName[][100],char lastName[][100],
                                                     int yob[],float gpa[], int size){
       printf("\nStudent have highest gpa : ");
       float maxGpa = gpa[0];

       if(size == 0){
          printf("\nDjtme m ngu vl, co cl gi dau ma in!!!");
          return;// return này dùng để dừng hàm
       }

       for(int i = 0; i <= size - 1; i++){
           if(gpa[i] > maxGpa) maxGpa = gpa[i];
       }

       for(int i = 0; i <= size - 2; i++){
           for(int j = i + 1; j <= size - 1; j++){
               if(gpa[i] == maxGpa){
                  printStudent(id,firstName,lastName,yob,gpa,i);
               }
           }
       }
}

void sortByFNameACS(char firstName[][100], int size){
     for(int i = 0; i <= size - 2; i++){
         for(int j = i + 1; j <= size - 1; j++){
             if(strcmp(firstName[i],firstName[j]) == 1){
                char tmp[MAX];
                tmp[0] = 0;
                strcpy(tmp,firstName[i]);
                strcpy(firstName[i],firstName[j]);
                strcpy(firstName[j],tmp);
             }
         }
     }
     printf("Sort successfull");
}
