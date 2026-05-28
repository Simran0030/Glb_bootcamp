#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int d1 = 0, d2 = 0, diff;

    printf("Enter matrix elements:\n");

    // Input matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find diagonal sums
    for(i = 0; i < 3; i++) {
        d1 = d1 + a[i][i];       // Primary diagonal
        d2 = d2 + a[i][2 - i];   // Secondary diagonal
    }

    diff = d1 - d2;

    // Make difference positive
    if(diff < 0)
        diff = -diff;

    printf("Diagonal Difference = %d", diff);

    return 0;
}