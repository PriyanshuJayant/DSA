#include<stdio.h>
void linearSearch(int arr[], int size, int target){
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            printf("Element %d Found at [%d]: \n",target,i);
            found = 1;
            for (int i = 0; i < size; i++)
            {
                printf("Element %d found at [%d]: \n",target,i);

            }
            break;
        }
    }
    if(found != 0){
        printf("Element Not found!");
    }
}
int main(){
    int arr[] = {10,20,30,40,50,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Array Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the Element to be Searched: ");
    scanf("%d", &target);
    linearSearch(arr,size,target);
    return 0;
}