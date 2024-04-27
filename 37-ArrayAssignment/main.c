//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
//                _ooOoo_                       NAM MÔ A DI ĐÀ PHẬT !
//               o8888888o
//               88" . "88      Thí chủ con tên là Nguyễn Tiến Đạt, dương lịch hai mươi tháng mười hai năm 2004
//               (| -_- |)      Ngụ tại số nhà 399 Bùi Văn Hòa, Long Bình, Biên Hòa, Đồng Nai, Việt Nam
//                O\ = /O
//            ____/`---'\____         Con lạy chín phương trời, con lạy mười phương đất
//            .' \\| |// `.             Chư Phật mười phương, mười phương chư Phật
//           / \\||| : |||// \        Con ơn nhờ Trời đất chổ che, Thánh Thần cứu độ
//         / _||||| -:- |||||- \    Xin nhất tâm kính lễ Hoàng thiên Hậu thổ, Tiên Phật Thánh Thần
//           | | \\\ - /// | |              Giúp đỡ con code sạch ít bug
//         | \_| ''\---/'' | |           Đồng nghiệp vui vẻ, sếp quý tăng lương
//         \ .-\__ `-` ___/-. /          Sức khoẻ dồi dào, tiền vào như nước
//       ___`. .' /--.--\ `. . __
//    ."" '< `.___\_<|>_/___.' >'"". NAM MÔ VIÊN THÔNG GIÁO CHỦ ĐẠI TỪ ĐẠI BI TẦM THANH CỨU KHỔ CỨU NẠN
//   | | : `- \`.;`\ _ /`;.`/ - ` : | |  QUẢNG ĐẠI LINH CẢM QUÁN THẾ ÂM BỒ TÁT
//     \ \ `-. \_ __\ /__ _/ .-` / /
//======`-.____`-.___\_____/___.-`____.-'======
//                `=---='
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
#include <stdio.h>
#include <stdlib.h>

// 37-ArrayAssignment

const int MAX = 100;
void input(int array[], int *size);
void output(int array[], int size);
void cpyArray(int arrayS[], int *sizeS, int arrayM[], int sizeM);
void cpyArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM);
void concatArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM);
int main()
{
    int arr1[100] = {2, 1, 5, 7, 9};
    int size1 = 5;
    int arr2[100] = {3, 5, 7};
    int size2 = 3;

    printf("\nArr1 ne: ");
    output(arr1, size1);
    printf("\nArr2 ne: ");
    output(arr2, size2);

    // hàm copy
    concatArrayV2(arr2, &size2, arr1, size1);
    printf("\nMang vua copy arr1 ne: ");
    printf("\nArr1 ne: ");
    output(arr1, size1);
    printf("\nArr2 ne: ");
    output(arr2, size2);
    return 0;
}
// ArrayAssignment: gán mảng | dán mảng | đổi giá trị cho mảng
/*
    copyArray: sao chép mảng
    concatArrayV2: nối mảng//nhét
    concatArrayV1:
        hàm nhận vào mảng 1 | mảng 2 | mảng 3
        hàm sẽ làm cho mảng 3 là
        kết quả của việc nối mảng 1 + mảng 2
        -B1: xoá mảng 3
        -B2: chép mảng 1 vào 3(nhét)
        -B3: nhét tiếp mảng 2 vào 3

    reverseArrayV1: đảo ngược mảng | nhét ngược
    ** hàm nhận vào duy nhất 1 mảng mà thôi
            hàm sẽ đảo ngược mảng này
        B1: giả nhét ngược mảng thật vào tmp[sizetmp] size++
        B2:  nhét tmp vào mảng gốc
    reverseArrayV2: đảo ngược mảng | swap đối xứng
    size - 1 - i
    //gán đối xứng | nhét
*/
void concatArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM)
{
    for (int i = 0; i <= sizeM - 1; i++)
    {
        arrayS[*sizeS] = arrayM[i];
        (*sizeS)++;
    }
}

void cpyArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM)
{
    // xoá hết các phần tử trong mảng đi copy
    *sizeS = 0;
    // duyệt mảng bị copy
    for (int i = 0; i <= sizeM - 1; i++)
    {
        arrayS[*sizeS] = arrayM[i];
        (*sizeS)++;
    }
}

void cpyArray(int arrayS[], int *sizeS, int arrayM[], int sizeM)
{
    for (int i = 0; i <= sizeM - 1; i++)
    {
        arrayS[i] = arrayM[i];
    }
    *sizeS = sizeM;
}

void input(int array[], int *size)
{
    printf("\nXin kich thuoc: ");
    scanf("%d", size);
    for (int i = 0; i <= *size - 1; i++)
    {
        printf("\nArray[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void output(int array[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%5d", array[i]);
    }
}
