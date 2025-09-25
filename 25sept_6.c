#include <stdio.h>
#include<string.h>

int main() {
    int a[3][3], i, j;
    int rowSum, colSum;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        rowSum = 0;
        for(j = 0; j < 3; j++) {
            rowSum = rowSum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }
    for(j = 0; j < 3; j++) {
        colSum = 0;
        for(i = 0; i < 3; i++) {
            colSum = colSum + a[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, colSum);
    }

    return 0;
}
