//
//  main.c
//  ch7-array
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 7.1 1D array
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 宣告array[n], n不能是變數, 要常數整數
    // 若超過array長度，score[11]=100，程式也會接續儲存變數，要小心.
    int score[10];
    int i, sum=0;
    float average;
    for (i=0; i<10; i++) {
        printf("The student %d score is:", i+1);
        scanf("%d", &score[i]);
        sum = sum + score[i];
    }
    average = (float) sum/10;
    printf("Average Score : %f \n", average);
    
    return 0;
}
