//
//  main.c
//  ch7-ex3
//
//  Created by SIH-YU YAO on 2022/6/1.
//
/*
 使用陣列進行階乘的大數運算
 假設我們要計算50!，電腦會無法儲存這麼大的變數，因此用陣列來儲存數字
 */
#include <stdio.h>

#define N 4

int main(void) {
    short a[200]={0};  //用a來記錄欲計算的數字
    int m=0;         //記錄目前所在位數, 個位數=0
    int i, k;
    int carry=0;   //紀錄該進位的數目
    
    // 初始化
    a[m] = 1;
    
    for (k=2; k<=N; k++) {
        printf("-----------------\n");
        printf("k = %d\n", k);
        for (i=0; i<=m; i++) {
            printf("i = %d\n", i);
            printf("a[%d] = %d\n", i, a[i]);
            a[i] = a[i] * k;
            printf("a[%d] * %d = %d\n", i, k, a[i]);
            a[i] = a[i] + carry;
            printf("a[%d] = %d, carry = %d\n", i, a[i], carry);
            if ((carry = a[i]/10) != 0 && i == m) {
                m++;  // 在最高位i==m時, 又必須進位carry!=0, 整個數字要多一位
                printf("m++, m = %d\n", m);
            }
            a[i] = a[i] % 10;
            printf("a[%d] %% 10 = %d\n", i, a[i]);
            
        }
    }
    
    printf("%d! = ", N);
    for (i=m; i>=0; i--) {
        printf("%d", a[i]);
    }
    puts("");
    
    return 0;
}
