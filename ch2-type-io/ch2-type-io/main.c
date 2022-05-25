//
//  main.c
//  ch2-type-io
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 2.2 整數型態
     - int  :在早期16位元系統使用 2 Bytes,在32/64系統用 4 Bytes.
     - long :範圍最大，記憶體最大，要用 4 Bytes.
     - short:範圍最小，記憶體用 2 Bytes.
 2.3 浮點數型態
     - float  :用 4 Bytes.
     - double :用 8 Bytes.
 2.4 字元型態
     - char : 用 1 Byte.
     - ASCII: 用 8 Bits編碼，有2^8=256種組合.
 2.5 無值
     - void : int rand(void);    表示沒有引數，但有回傳整數值.
              void main(void){}; 表示沒有引數，也沒有回傳值.
 2.6 Constant Variable/#define
     - const int num-35;  表示常數num=35不能改變.
     - #define pi 3.14159 前處理指令，後面沒有分號，程式在編譯前會先進行前置處理作業.
 2.7 格式化輸出函式
     - printf();
 2.8 格式化輸入
     - scanf();
 
 */

#include <stdio.h>

int main(void) {
    // 變數名稱有分大小寫
    int i=0;  //宣告整數變數i，初始值=0
    int j=0;
    float f=0.243;
    char c='g';
    int x;
    float y;
    char z;
    
    i = i + 1;
    printf("int = %d\n", i+j);
    printf("float = %f\n", f);
    printf("char = %c\n", c);
    
    printf("Input a Intager, Float, and a Character: ");
    scanf("%d %f %c", &x, &y, &z);
    printf("int = %d\n", x);
    printf("float = %f\n", y);
    printf("char = %c\n", z);
    return 0;
}
