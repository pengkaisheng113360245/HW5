#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 // �w�q�}�C�j�p

// �禡�ŧi
void bubbleSort(int* const array, const int size);
void swap(int* element1Ptr, int* element2Ptr);

int main(void) {
    // ��l�ư}�C
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;

    // ��ܭ�l���
    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    // �I�s bubbleSort �禡�i��Ƨ�
    bubbleSort(a, SIZE);

    // ��ܱƧǫ᪺���
    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }

    printf("\n");
    system("pause"); // ���ݨϥΪ̫����~��
    return 0;
}

// ��w�ƧǨ禡
void bubbleSort(int* const array, const int size) {
    void swap(int* element1Ptr, int* element2Ptr); // �禡�쫬
    int pass;
    int j;

    // ��w�ƧǺt��k
    for (pass = 0; pass < size - 1; pass++) {
        for (j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]); // �洫����
            }
        }
    }
}

// �洫�禡
void swap(int* element1Ptr, int* element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
