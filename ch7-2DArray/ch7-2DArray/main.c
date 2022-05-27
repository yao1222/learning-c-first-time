//
//  main.c
//  ch7-2DArray
//
//  Created by SIH-YU YAO on 2022/5/27.
//
/*
 7.3 dimensional array
              |a00  a01  a02|
    Input A = |a10  a11  a12|,
              |a20  a11  a22|
    Calculate |A| = ? (A的行列式=?)
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A[3][3], i, j, ans=0;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<3; i++) {
        ans = ans + A[0][i] * A[1][(i+1)%3] * A[2][(i+2)%3]
        - A[0][(i+2)%3] * A[1][(i+1)%3] * A[2][i];
    }
    printf("|A| = %d", ans);
    return 0;
}
