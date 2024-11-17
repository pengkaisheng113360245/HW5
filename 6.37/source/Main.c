#include <stdio.h>

// 遞迴函式：尋找陣列中的最大值
int recursiveMaximum(const int array[], int size) {
    if (size == 1) { // 如果陣列只有一個元素
        return array[0];
    }

    int max = recursiveMaximum(array, size - 1); // 遞迴處理剩餘的陣列
    return (array[size - 1] > max) ? array[size - 1] : max; // 比較最後一個元素與最大值
}

int main(void) {
    int myArray[] = { 1, 5, 3, 9, 2, 8 };
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int max = recursiveMaximum(myArray, size); // 呼叫遞迴函式
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
