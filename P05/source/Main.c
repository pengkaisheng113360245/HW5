#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    int* aPtr;

    a = 7;          // 將變數 a 設定為 7
    aPtr = &a;      // 將 a 的位址指派給指標 aPtr

    // 顯示 a 的位址以及 aPtr 的值（也就是 a 的位址）
    printf("The address of a is %p\nThe value of aPtr is %p\n", &a, aPtr);

    // 顯示 a 的值以及 *aPtr 的值（也就是 a 的值）
    printf("\nThe value of a is %d\nThe value of *aPtr is %d\n", a, *aPtr);

    // 說明 * 和 & 是互補的
    printf("\nShowing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    system("pause"); // 等待使用者按鍵繼續
    return 0;
}
