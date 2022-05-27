//
//  main.c
//  ch7-array-to-function
//
//  Created by SIH-YU YAO on 2022/5/27.
//
/*
 7.4 Passing array into function:
     Array can be argument. Passing the first element's memory
     instead of copy one directlty.
 */

#include <stdio.h>

void swap(int []);

int main(void) {
    int a[2] = {3, 6};
    printf("a[0]=%d, a[1]=%d", a[0], a[1]); // Before Swap
    puts("");
    swap(a);
    printf("a[0]=%d, a[1]=%d", a[0], a[1]); // After Swap
    puts("");
    return 0;
}

void swap(int a[]) {
    int temp;
    
    temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
