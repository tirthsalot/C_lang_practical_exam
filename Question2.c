#include <stdio.h>

int main() {
    int row, col, i, j, sum = 0;
    float avg;

    printf("Enter number of rows:\n");
    scanf("%d", &row);

    printf("Enter number of columns:\n");
    scanf("%d", &col);

    int a[row][col];  

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    avg = sum / (float)(row * col);

    printf("Average = %.2f\n", avg);

    return 0;
}
