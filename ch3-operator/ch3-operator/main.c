//
//  main.c
//  ch3-operator
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 3.1 assignment operator is = .
 3.6 sizeof operator: 計算變數所佔用的記憶體大小.
 3.7 型態轉換：整數除以整數得到整數，要先換型態才可以得到小數解.
 3.8 三元運算子：條件判斷？運算式1 : 運算式2 .

 */

#include <stdio.h>

int main() {
    int a, b;
    float f;
    
    scanf("%d %d", &a, &b);
    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d\n", a/b);
    printf("a%%b = %d\n", a%b);
    a++;
    printf("a++ = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("True/False = %d\n", a==b);
    
    // temperature : C = (F-32)*5/9
    printf("Enter temperature(F): ");
    scanf("%f", &f);
    printf("Temperature (C) : %f\n", (f-32)*5/9);
    
    // sizeof
    printf("int = %d bytes.\n", sizeof(int));
    printf("float = %d bytes.\n", sizeof(float));
    printf("double = %d bytes.\n", sizeof(double));
    printf("char = %d bytes.\n", sizeof(char));
    
    // 型態轉換
    a = 10;
    b = 3;
    f = (float)a/b;
    printf("轉換型態前除法 = %d\n", a/b);
    printf("轉換型態後除法 = %f\n", f);
    
    // 三元運算子
    int aa=10, bb=20, cc=30;
    aa = bb > cc ? bb : cc;
    printf("bb=20, cc=30, aa = %d\n",aa);

    int a1, b1, c1, d1;
    a1 = 1;
    b1 = ++a1;
    c1 = b1++;
    d1 = b1--;
    printf("%d\n", a1+b1+c1+d1);
    return 0;
}
