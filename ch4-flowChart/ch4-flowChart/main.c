//
//  main.c
//  ch4-flowChart
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 4.1 algorithm: 為解決某一問題或完成特定工作，一系列有序且明確的指令集合.
 4.3 if..else..
 4.6 switch..case..break
 
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int money;
    // discount
    printf("Total : ");
    scanf("%d", &money);
    if (money>2000) {
        money = money * 0.7;
    }
    printf("Pay: %d\n", money);
    return 0;
}
