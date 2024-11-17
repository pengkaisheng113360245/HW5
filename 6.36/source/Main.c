#include <stdio.h>

// 遞迴函式：反向輸出字串
void stringReverse(const char* str) {
    if (*str == '\0') { // 如果字串結尾，停止遞迴
        return;
    }
    stringReverse(str + 1); // 遞迴到下一個字元
    putchar(*str); // 從遞迴回溯時輸出字元
}

int main(void) {
    const char myString[] = "Hello, World!";

    printf("Original string: %s\n", myString);
    printf("Reversed string: ");
    stringReverse(myString); // 呼叫反向輸出函式
    printf("\n");

    return 0;
}
