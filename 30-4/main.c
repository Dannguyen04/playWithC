#include <stdio.h>
#include <stdlib.h>

/*30-4
    Viết hàm nhận vào n, tính n giai thừa
    nhận vào n -> hàm ko xin -> hàm có đầu vào
    tính mà ko in -> return ném ra ngoài -> có đầu ra

*/

int factorial(int n);
int factorialV2(int n);
int main()
{
    printf("\nGiai thua ne : %d", factorialV2(3));
    return 0;
}


int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
    }
    
// Dùng đệ quy
int factorialV2(int n){
    if(n == 1 || n == 0) return 1;
    return n * factorialV2(n - 1);
}
