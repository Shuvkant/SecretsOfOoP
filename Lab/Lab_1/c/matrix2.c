#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void display_matrix(int matrix[][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows (up to %d): ", MAX_ROWS);
    scanf("%d", &rows);

    printf("Enter the number of columns (up to %d): ", MAX_COLS);
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    display_matrix(matrix, rows, cols);

    return 0;
}
