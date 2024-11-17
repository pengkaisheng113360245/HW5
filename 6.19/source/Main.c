#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000 // 投擲次數
#define SIDES 6     // 骰子的面數

int main(void) {
    int sumFrequency[13] = { 0 }; // 用於記錄點數總和的次數，索引 0~1 不使用
    int die1, die2, sum;        // 兩顆骰子的點數及其總和

    srand(time(0)); // 初始化隨機數生成器

    // 模擬骰子投擲
    for (int i = 0; i < ROLLS; i++) {
        die1 = rand() % SIDES + 1; // 骰子1的點數
        die2 = rand() % SIDES + 1; // 骰子2的點數
        sum = die1 + die2;         // 計算總和
        sumFrequency[sum]++;       // 記錄該總和出現的次數
    }

    // 輸出統計結果
    printf("Sum of Dice   Frequency   Probability\n");
    for (int i = 2; i <= 12; i++) {
        printf("%6d %12d %13.2f%%\n", i, sumFrequency[i],
            100.0 * sumFrequency[i] / ROLLS);
    }

    return 0;
}
