#include<stdio.h>
#define size 100
int array[size];
int n = 0;

void beginsert(){
    if(n >= size){
        printf("Array is Full\n");
        return;
    }
    int element;
    printf("Enter the element to insert at beginning: ");
    scanf("%d",&element);
    for (int i = n; i > 0; i--)
    {
        array[i] = array[i-1];
    }
    array[0] = element;
    n++; 
    
}


int main(){

    
    return 0;
}