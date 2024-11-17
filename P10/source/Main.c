#include <stdio.h>
#include <stdlib.h>

// 函式宣告，透過參考（指標）修改數值
void cubeByReference(int* nPtr);

int main(void) {
    int number = 5; // 定義變數並初始化為 5

    // 輸出原始值
    printf("The original value of number is %d\n", number);

    // 呼叫 cubeByReference 函式，將 number 的位址傳入
    cubeByReference(&number);

    // 輸出修改後的新值
    printf("\nThe new value of number is %d\n", number);

    system("pause"); // 等待使用者按鍵繼續
    return 0;
}

// cubeByReference 函式實作
void cubeByReference(int* nPtr) {
    // 透過指標修改傳入變數的值為其立方值
    *nPtr = *nPtr * *nPtr * *nPtr;
}
