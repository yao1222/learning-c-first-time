//
//  main.c
//  ch7-array-ex1
//
//  Created by SIH-YU YAO on 2022/5/27.
//
/*
 Create a calculation for f(x) = ax^4 + bx^3 + cx^2 + dx + e
 Input e, d, c, b, a stored in array, and x=?
 print f(x)=?
 */
#include <stdio.h>

int S(int, int);

int main(void) {
    int x, f[5], i, ans=0;
    
    for (i=0; i<5; i++) {
        printf("Input %d coefficient: ", i);
        scanf("%d", &f[i]);
    }
    printf("Input x = ");
    scanf("%d", &x);
    for (i=0; i<5; i++) {
        ans = ans + S(x, i) * f[i];
    }

    printf("ans = %d", ans);
    puts("");
    return 0;
}

int S(int x, int n) {
    int i, total=x;
    if (n==0) {
        return 1;
    }
    for (i=1; i<n; i++) {
        total = total * x;
    }
    return total;
}
