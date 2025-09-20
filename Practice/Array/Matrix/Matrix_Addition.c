#include<stdio.h>
int main(){
    int row_1,col_1,row_2,col_2;
    printf("Enter Rows of First Matrix: ");
    scanf("%d",&row_1);
    printf("Enter Columns of First Matrix: ");
    scanf("%d",&col_1);
    printf("Enter Rows of Second Matrix: ");
    scanf("%d",&row_2);
    printf("Enter Columns of Second Matrix: ");
    scanf("%d",&col_2);
    printf("\n");
    if ((row_1 != row_2) || (col_1 != col_2))
    {
        printf("Invalid!!, Please Enter Equal Rows and Columns of Both Matrix");
        return 1;
    }
    
    int Matrix_1[row_1][col_1];
    int Matrix_2[row_2][col_2];
    int Sum[row_1][col_1];

    printf("Enter the Elements of First Matrix: \n");
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&Matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Elements of Second Matrix: \n");
    
    for (int i = 0; i < row_2; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            printf("Enter [%d][%d]: ",i,j);
            scanf("%d",&Matrix_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("First Matrix: \n");
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            printf("%d\t",Matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second Matrix: \n");
    for (int i = 0; i < row_2; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            printf("%d\t",Matrix_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum fo Matrix: \n");
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            Sum[i][j] = Matrix_1[i][j] + Matrix_2[i][j];
            printf("%d\t",Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
