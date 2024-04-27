#include <stdio.h>
#include <stdlib.h>


//34- sumArray
const int MAX = 100; // tạo ra 1 hằng số
// hàm nhập mảng
void inputArray(int array[], int *size);
// hàm xuất mảng
void outputArray(int array[], int size);
//viết hàm tính tổng các phần tử chẵn
int sumEvenArray(int array[], int size);
//viết hàm tính tổng các phần tử ở vị trí chẳn
int sumPosEvenArray(int array[], int size);
//tính tổng các số nguyên tố trong khoảng
int sumPrimeArray(int array[], int size);
//cách 2
int checkPrime(int number);
int sumPrimeArrayV2(int array[], int size);
//-----MAIN-----
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain,&sizeMain);
    printf("\nKich thuoc ban vua nhap ne: ");
    outputArray(arrMain,sizeMain);
    printf("\nSum Even Array = %d", sumEvenArray(arrMain,sizeMain));
    printf("\nSum Positive Even Array = %d", sumPosEvenArray(arrMain,sizeMain));
    printf("\nSum Prime Array = %d", sumPrimeArray(arrMain,sizeMain));
    printf("\nSum Prime ArrayV2 = %d", sumPrimeArrayV2(arrMain,sizeMain));
    return 0;
}
int sumPrimeArrayV2(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
            sum += array[i];
        }
    }
    return sum;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
//SUMPRIMEARRAY
int sumPrimeArray(int array[], int size){
    int sum =0;
    for(int i = 0; i <= size - 1; i++){
            int isPrime = 1;
        if(array[i] >= 2){
            for(int j = 2; j <= array[i] - 1; j++){
                if(array[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sum += array[i];
            }
        }
    }
    return sum;
}
//SUMPOSEVEN
int sumPosEvenArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
//SUMEVEN
int sumEvenArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
//INPUT
void inputArray(int array[], int *size){
    printf("\nXin kich thuoc nha: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++ ){
        printf("\nArray[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
/*
    con trỏ trong hàm
    nhập -> địa chỉ -> tên
    giá trị -> *tên
*/
//OUTPUT
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++ ){
        printf("%5d", array[i]);
    }
}
