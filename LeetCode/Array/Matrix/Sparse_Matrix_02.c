#include<stdio.h>
void checkSparse(int rows,int cols, int Matrix[rows][cols]){
    int zerocount = 0,total = rows * cols;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if(Matrix[i][j] == 0)
                zerocount++;
    if (zerocount > total / 2)
        printf("This is Sparse Matrix\n");
    else
        printf("This is not sparse matrix\n");
}
int main(){
    int Matrix[3][3]={
        {0,0,1},
        {0,0,0},
        {1,0,0}
    };
    checkSparse(3,3,Matrix);
    return 0;
}