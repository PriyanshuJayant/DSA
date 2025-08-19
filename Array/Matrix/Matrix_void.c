#include<stdio.h>
int row_1, row_2, col_1, col_2;

void printMatrix(int rows, int cols, int matrix[rows][cols]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("Enter Rows of First Matrix: ");
    scanf("%d", &row_1);
    printf("Enter Columns of First Matrix: ");
    scanf("%d", &col_1);
    printf("\n");
    printf("Enter Rows of Second Matrix: ");
    scanf("%d", &row_2);
    printf("Enter Columns of Second Matrix: ");
    scanf("%d", &col_2);
    printf("\n");

    if (row_1 != row_2 || col_1 != col_2)
    {
        printf("Rows and Columns of both Matrix Should be Same for Subtraction\n");
        return 1;
    }

    // Declare Matrix
    int Matrix_1[row_1][col_1];
    int Matrix_2[row_2][col_2];
    int Sub[row_1][col_1]; // Sub must have the same dimensions as Matrix_1

    // Input Elements of Matrix_1
    printf("Enter the Elements of First Matrix\n");
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            printf("Enter Element at [%d][%d]: ", i, j);
            scanf("%d", &Matrix_1[i][j]);
        }
        printf("\n");
    }

    // Input Elements of Matrix_2
    printf("Enter the Elements of Second Matrix\n");
    for (int i = 0; i < row_2; i++) // row_2 used here to correctly iterate over Matrix_2
    {
        for (int j = 0; j < col_2; j++) // col_2 used here to correctly iterate over Matrix_2
        {
            printf("Enter Element at [%d][%d]: ", i, j);
            scanf("%d", &Matrix_2[i][j]);
        }
        printf("\n");
    }

    // Compute Subtraction of Matrix
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            Sub[i][j] = Matrix_1[i][j] - Matrix_2[i][j];
        }
    }

    printf("Matrix 1:\n\n");
    printMatrix(row_1, col_1, Matrix_1);
    printf("Matrix 2:\n\n");
    printMatrix(row_2, col_2, Matrix_2);
    // Print the Results of Matrix
    printf("Subtraction of Matrix :\n");
    printMatrix(row_1, col_1, Sub);

}
