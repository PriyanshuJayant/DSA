#include<stdio.h>
int main(){
    int Matrix[3][3] = {{0,2,0},{0,2,2},{0,2,2}};
    int zeroCount = 0;
    int total = 3 * 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(Matrix[i][j] == 0)
                zeroCount++;
    if (zeroCount > total/2)
        printf("This is Sparse Matrix");
    else
        printf("This is not Sparse MAtrix");
    return 0;
}