//
//  main.c
//  ch6-recursive
//
//  Created by SIH-YU YAO on 2022/5/25.
//
/*
 6.5 recursive function: 一個函式直接或間接呼叫函式本身.
 6.6 main function
     - argument: 在command prompt執行列，可在程式後加入引數來當作輸入.
 */

#include <stdio.h>

int factorial(int);        //prototype, recursion method
int factorial_faster(int); //prototype, non-recursion method
int f(int);                //費氏數列, recursion method
int f_loop(int);           //費氏數列, loop method

int main(int argc, const char * argv[]) {
    // main引數
    int i;
    printf("argc = %d\n", argc);
    for (i=0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }
    // recursion
    // lower efficiency
    // 每一次呼叫函式都會佔去記憶體
    int n;
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    
    //Non-recursion method
    printf("%d! = %d\n", n, factorial_faster(n));
    
    
    // 費氏數列 - recursion
    printf("f(%d) = %d\n", n, f(n));
    
    // 費氏數列 - loop
    printf("f(%d) = %d\n", n, f_loop(n));
    
    return 0;
}

int factorial(int x) {
    if (x==1) {
        return 1;
    }
    return x*factorial(x-1);
}

int factorial_faster(int x) {
    int i, ans=1;
    for (i=1; i<=x; i++) {
        ans = ans * i;
    }
    return ans;
}

int f(int x) {
    if (x<=2) {             //遞迴的中止條件
        return 1;
    }
    return (f(x-1) + f(x-2));
}

int f_loop(int x) {
    int i, sum, pre, fi;
    pre = 0;
    fi = 1;
    for (i=1; i<x; i++) {
        sum = pre + fi;   //加出下一項
        pre = fi;         //記錄前一項
        fi = sum;         //第i項
    }
    return fi;
}
