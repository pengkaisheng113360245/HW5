#include <stdio.h>
#include <stdlib.h>

// 修改：將參數改為指標
void CubeByReference(int* mPtr);

int main(void) {
    int number = 5; // 初始化變數
    printf("The original value of number is %d\n", number);

    // 傳入變數的位址
    CubeByReference(&number);

    // 輸出修改後的值
    printf("\nThe new value of number is %d\n", number);

    system("pause");
    return 0;
}

// 修改：使用指標操作進行立方計算
void CubeByReference(int* mPtr) {
    *mPtr = (*mPtr) * (*mPtr) * (*mPtr); // 解參考並計算立方
}
