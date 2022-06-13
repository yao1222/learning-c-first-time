//
//  main.c
//  ch7-ex4-Fibonacci
//
//  Created by SIH-YU YAO on 2022/6/13.
//

/*
 Find f(n)=?
 Input: n=9
 Output: f(9) = 34
 */

#include <stdio.h>
#include <stdlib.h>

int calc(int n, int []);  //use array to store calculated result

int main(void) {
    int n, cache[50]={0};
    scanf("%d", &n);
    
    printf("f(%d) = %d", n, calc(n-1, cache));
    return 0;
}

int calc(int n, int cache[])
{
    // First to find if calculated or not
    if (cache[n]==0) {
        if (n==0 || n==1) {
            return 1;
        }
        else
            cache[n] = calc(n-1, cache) + calc(n-2, cache);
    }
    
    return cache[n];
}
