#include <stdio.h>
#include <assert.h>

void test_getHighestMul2NumberArray() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    assert(getHighestMul2NumberArray(arr1, size1) == 20);

    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    assert(getHighestMul2NumberArray(arr2, size2) == 2000);

    int arr3[] = {2, 4, 6, 8, 10};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    assert(getHighestMul2NumberArray(arr3, size3) == 80);

    // Add more test cases here
}

int main() {
    test_getHighestMul2NumberArray();
    printf("All tests passed successfully.\n");
    return 0;
}