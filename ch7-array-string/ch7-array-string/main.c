//
//  main.c
//  ch7-array-string
//
//  Created by SIH-YU YAO on 2022/5/27.
//
/*
 7.2 用陣列表示字串：
     因為C沒有String，通常用array和index的觀念去表示.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Array to represent String
    char name[4];
    name[0] = 'A';
    name[1] = 'm';
    name[2] = 'y';
    name[3] = '\0'; //指定給陣列最後一個元素，用來判斷字串結束
    printf("%s", name);
    return 0;
}
