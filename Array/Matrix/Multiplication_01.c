// Multiplication of two matrix
#include<stdio.h>
int main(){
    int row_1,row_2,col_1,col_2;
    printf("Enter a Row and Column of First Matrix: \n");
    scanf("%d%d",&row_1,&col_1);
    printf("Enter a Row and Column of Second Matrix: \n");
    scanf("%d%d",&row_2,&col_2);
    if(col_1 != row_2){
        printf("Please Enter A Valid Matrix");
        return 1;
    }

    int Matrix_1[row_1][col_1];
    int Matrix_2[row_2][col_2];
    int mul[row_1][col_2];

    printf("Enter the Elements of First Matrix\n");
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_1; j++)
        {
            printf("Enter Value at [%d][%d]: ",i,j);
            scanf("%d",&Matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Elements of second Matrix\n");
    for (int i = 0; i < row_2; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            printf("Enter Value at [%d][%d]: ",i,j);
            scanf("%d",&Matrix_2[i][j]);
        }
        printf("\n");
    }
    //  Initialization
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < col_2; j++)
        {
            mul[i][j] = 0;
        }
    }
    // Matrix Multiplication
    for(int i = 0; i < row_1; i++){
        for(int j = 0; j < col_2; j++){
            for(int k = 0; k < col_1; k++){
                mul[i][j] += Matrix_1[i][k] * Matrix_2[k][j];
            }
        }
    }

    
    printf("Multiplication Matrix: \n");
    for(int i = 0;i < row_1;i++){
        for (int j = 0; j < col_2; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }


    return 0;
}