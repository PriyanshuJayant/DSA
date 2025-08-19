#include<stdio.h>
#define row 3
#define col 4

void matrix_addition(int a[row][col],int b[row][col],int c[row][col]);

int main(void){
    int a[row][col]=void matrix_addition(int a[row][col],int b[row][col],int c[row][col]);
    {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
    };
    int b[row][col]=
    {
        {2,2,2,2},
        {2,2,2,2},
        {2,2,2,2},
    };
    int c[row][col];

    matrix_addition(a,b,c);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrix_addition(int a[row][col],int b[row][col],int c[row][col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    
}
