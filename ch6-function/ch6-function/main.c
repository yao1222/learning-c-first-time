//
//  main.c
//  ch6-function
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 6.1 函式架構
     - prototype 函式雛型 : 先宣告雛型後才能呼叫使用函式.
     - statement 函式本身(程式敘述).
     - arguments 函式引數.
 6.4 變數儲存類別: 提供修飾字讓變數有不同特性,
     - extern  : 告訴編譯器此變數在其他地方被宣告了，不再配置記憶體給它.
     - register: register是CPU上的memory，讓變數持續留在register使得CPU直接存取比較快速，可用在迴圈.
     - static  : 使變數只初始化一次.
     - const   : 變數無法被更改.
 
 */
#include <stdio.h>

int f_pow(int, int);   //prototype
int f_static(void);   //prototype
int z;                 //宣告全域變數 global variable
int main(void) {
    // calculate power
    int x, n, ans;
    printf("計算x的n次方：x=?, n=?");
    scanf("%d %d", &x, &n);
    ans = f_pow(x,n);
    printf("%d ^ %d = %d\n", x, n, ans);
    
    // register
    // 實際程式編譯時，編譯器會做最佳化動作，將必要變數指定成register型態，故可省略.
    register int j;
    for (j=0; j<1000; j++) {
        printf(".");
    }
    
    // static
    int i;
    for (i=1; i<5; i++) {
        printf("\n x = %d\n", f_static());
    }
    
    return 0;
}

int f_pow(int x, int n) {
    int i, total=1;
    for (i=0; i<n; i++) {
        total = total * x;
    }
    z = 1000;
    printf("Global Variable z = %d\n", z);
    return total;
}

int f_static(void){
    static int x=0;
    return x++;
}
