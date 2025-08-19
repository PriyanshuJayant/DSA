#include<stdio.h>
int main(){
    int row, col;
    printf("Enter Row: \n");
    scanf("%d",&row);
    printf("Enter Column: \n");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter Elements of MAtrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Elements at position [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    printf("Matrix: \n");
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}