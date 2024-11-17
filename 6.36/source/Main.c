#include <stdio.h>

// ���j�禡�G�ϦV��X�r��
void stringReverse(const char* str) {
    if (*str == '\0') { // �p�G�r�굲���A����j
        return;
    }
    stringReverse(str + 1); // ���j��U�@�Ӧr��
    putchar(*str); // �q���j�^���ɿ�X�r��
}

int main(void) {
    const char myString[] = "Hello, World!";

    printf("Original string: %s\n", myString);
    printf("Reversed string: ");
    stringReverse(myString); // �I�s�ϦV��X�禡
    printf("\n");

    return 0;
}
