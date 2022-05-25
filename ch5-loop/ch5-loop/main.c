//
//  main.c
//  ch5-loop
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, sum;
    sum = 0;
    for (i=0; i<11; i++) {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
    
    // 2 variable, print square < 100
    int s, t;
    for (s=0,t=0; s*t<100; s++, t++) {
        printf("%d * %d < 100 \n=\n", s, t);
    }
    
    // while 只有判斷式
    i = 1;                   //起始式
    sum = 0;
    while (i<100) {            //判斷式
        sum = sum + i;
        i = i + 2;                 //運算式
    }
    printf("1+3+5+..+99 = %d \n=\n", sum);
    return 0;
}
