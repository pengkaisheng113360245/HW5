#include <stdio.h>

// 函式宣告
int binarySearch(int array[], int low, int high, int key);

int main(void) {
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; // 已排序的陣列
    int size = sizeof(arr) / sizeof(arr[0]);          // 陣列大小
    int key = 10;                                     // 要搜尋的值
    int result;

    // 呼叫二分搜尋函式
    result = binarySearch(arr, 0, size - 1, key);

    // 顯示搜尋結果
    if (result != -1) {
        printf("The key %d is found at index %d.\n", key, result);
    }
    else {
        printf("The key %d is not found in the array.\n", key);
    }

    return 0;
}

// 二分搜尋函式（遞迴）
int binarySearch(int array[], int low, int high, int key) {
    if (low > high) {
        return -1; // 搜尋範圍無效，表示未找到
    }

    int mid = (low + high) / 2; // 計算中間索引

    if (array[mid] == key) {
        return mid; // 找到目標值，回傳索引
    }
    else if (array[mid] > key) {
        return binarySearch(array, low, mid - 1, key); // 搜尋左半部
    }
    else {
        return binarySearch(array, mid + 1, high, key); // 搜尋右半部
    }
}
