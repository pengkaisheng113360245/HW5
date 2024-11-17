#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �禡�ŧi
void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]);

int main(void) {
    // ���P�I�ư}�C
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                            "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    int deck[4][13] = { 0 }; // ��l�Ƽ��J�P�]4 ��� x 13 �I�ơ^

    srand(time(0)); // ��l���H���ƥͦ���

    shuffle(deck);            // �~�P
    deal(deck, face, suit);   // �o�P

    system("pause");
    return 0;
}

// �~�P�禡
void shuffle(int wDeck[][13]) {
    int row;    // ������
    int column; // �I�Ư���
    int card;   // �ĴX�i�P

    for (card = 1; card <= 52; card++) { // �@ 52 �i�P
        do {
            row = rand() % 4;         // �H����ܪ��
            column = rand() % 13;     // �H������I��
        } while (wDeck[row][column] != 0); // �Y��m�w�Q���ΡA���s���

        wDeck[row][column] = card; // ����m���t�P��
    }
}

// �o�P�禡
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) {
    int card;   // �ĴX�i�P
    int row;    // ������
    int column; // �I�Ư���

    for (card = 1; card <= 52; card++) { // �M���Ҧ��P
        for (row = 0; row < 4; row++) {  // �M�����
            for (column = 0; column < 13; column++) { // �M���I��
                if (wDeck[row][column] == card) { // ���������P
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                        card % 2 == 0 ? '\n' : '\t'); // ���ƵP����A�_�ƵP�� Tab
                }
            }
        }
    }
}
