//
//  main.c
//  ch7-ex2
//
//  Created by SIH-YU YAO on 2022/5/27.
//
/*
 Input value=?
 Find the index of the value in random array.
 If none, return -1.
 If multiple, return all index.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void) {
    int num, a[SIZE], i, found=0;
    
    // generate random array
    srand(time(NULL));       //random generate array element
    for (i=0; i<SIZE; i++) {
        a[i] = rand() % 10 +1;
    }
    
    printf("Input a Number (1~10): ");
    scanf("%d", &num);
    
    // find the index
    for (i=0; i<SIZE; i++) {
        if (a[i] == num) {
            printf("%d found in a[%d] = %d", num, i, num);
            puts("");
            found = 1;
        }
    }
    if (found==0) {
        printf("-1");
        puts("");
    }
    return 0;
}
