#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函式宣告
void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]);

int main(void) {
    // 花色與點數陣列
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                            "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    int deck[4][13] = { 0 }; // 初始化撲克牌（4 花色 x 13 點數）

    srand(time(0)); // 初始化隨機數生成器

    shuffle(deck);            // 洗牌
    deal(deck, face, suit);   // 發牌

    system("pause");
    return 0;
}

// 洗牌函式
void shuffle(int wDeck[][13]) {
    int row;    // 花色索引
    int column; // 點數索引
    int card;   // 第幾張牌

    for (card = 1; card <= 52; card++) { // 共 52 張牌
        do {
            row = rand() % 4;         // 隨機選擇花色
            column = rand() % 13;     // 隨機選擇點數
        } while (wDeck[row][column] != 0); // 若位置已被佔用，重新選擇

        wDeck[row][column] = card; // 為位置分配牌號
    }
}

// 發牌函式
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) {
    int card;   // 第幾張牌
    int row;    // 花色索引
    int column; // 點數索引

    for (card = 1; card <= 52; card++) { // 遍歷所有牌
        for (row = 0; row < 4; row++) {  // 遍歷花色
            for (column = 0; column < 13; column++) { // 遍歷點數
                if (wDeck[row][column] == card) { // 找到對應的牌
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                        card % 2 == 0 ? '\n' : '\t'); // 偶數牌換行，奇數牌用 Tab
                }
            }
        }
    }
}
