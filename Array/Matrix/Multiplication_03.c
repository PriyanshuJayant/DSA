#include<stdio.h>
int Matrix_1[2][2] = {
    {1,2},
    {4,5}
};
int Matrix_2[2][2] = {
    {7,8},
    {10,11}
};
int Matrix_3[2][2] = {0};

void mul(){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                Matrix_3[i][j] +=  Matrix_1[i][k] * Matrix_2[k][j];
            }
        }
    }
}
int main(){
    mul();
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",Matrix_3[i][j]);
        }
        printf("\n");
    }
    return 0;
}