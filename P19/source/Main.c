#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int b[] = { 10, 20, 30, 40 }; // ��l�ư}�C b
    int* bPtr = b;              // �ŧi���� bPtr �ë��V�}�C b
    int i;                      // �j���ܼ�
    int offset;                 // �����q

    // �ϥΰ}�C�U�Ъ�ܪk��X�}�C����
    printf("Array b printed with:\nArray subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    // �ϥΫ���/������ܪk��X�}�C����
    printf("\nPointer/offset notation where\n"
        "the pointer is the array name\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }

    // �ϥΫ��ФU�Ъ�ܪk��X�}�C����
    printf("\nPointer subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    // �ϥΫ���/������ܪk��X�}�C����
    printf("\nPointer/offset notation\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
    }

    system("pause"); // �Ȱ��{������A���ݨϥΪ̫����~��
    return 0;
}
