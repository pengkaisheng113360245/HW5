#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int b[] = { 10, 20, 30, 40 }; // 初始化陣列 b
    int* bPtr = b;              // 宣告指標 bPtr 並指向陣列 b
    int i;                      // 迴圈變數
    int offset;                 // 偏移量

    // 使用陣列下標表示法輸出陣列元素
    printf("Array b printed with:\nArray subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    // 使用指標/偏移表示法輸出陣列元素
    printf("\nPointer/offset notation where\n"
        "the pointer is the array name\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }

    // 使用指標下標表示法輸出陣列元素
    printf("\nPointer subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    // 使用指標/偏移表示法輸出陣列元素
    printf("\nPointer/offset notation\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }

    system("pause"); // 暫停程式執行，等待使用者按鍵繼續
    return 0;
}
