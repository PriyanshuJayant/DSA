#include <stdio.h>

void checkSparse(int rows, int cols, int matrix[rows][cols]) {
    int zeroCount = 0, totalElements = rows * cols;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (matrix[i][j] == 0)
                zeroCount++;
    if (zeroCount > totalElements / 2)
        printf("The matrix is sparse.\n");
    else
        printf("The matrix is not sparse.\n");
}

int main() {
    int matrix[3][3] = {
        {0, 0, 1},
        {0, 0, 0},
        {1, 0, 0}
    };
    checkSparse(3, 3, matrix);
    return 0;
}