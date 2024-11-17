#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 // ���Y����
#define SIDES 6     // ��l������

int main(void) {
    int sumFrequency[13] = { 0 }; // �Ω�O���I���`�M�����ơA���� 0~1 ���ϥ�
    int die1, die2, sum;        // ������l���I�ƤΨ��`�M

    srand(time(0)); // ��l���H���ƥͦ���

    // ������l���Y
    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % SIDES + 1; // ��l1���I��
        die2 = rand() % SIDES + 1; // ��l2���I��
        sum = die1 + die2;         // �p���`�M
        sumFrequency[sum]++;       // �O�����`�M�X�{������
    }

    // ��X�έp���G
    printf("Sum of Dice   Frequency   Probability\n");
    for (int i = 2; i <= 12; i++) {
        printf("%6d %12d %13.2f%%\n", i, sumFrequency[i],
            100.0 * sumFrequency[i] / ROLLS);
    }

    return 0;
}
