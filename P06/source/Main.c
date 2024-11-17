#include <stdio.h>
#include <stdlib.h>

// 函式宣告
int cubeByValue(int n);

int main(void) {
    int number = 5; // 定義變數並初始化為 5

    // 輸出原始值
    printf("The original value of number is %d\n", number);

    // 呼叫 cubeByValue 函式計算立方值
    number = cubeByValue(number);

    // 輸出計算後的新值
    printf("\nThe new value of number is %d\n", number);

    system("pause"); // 等待使用者按下按鍵
    return 0;
}

// cubeByValue 函式實作
int cubeByValue(int n) {
    return n * n * n; // 計算 n 的立方值
}
