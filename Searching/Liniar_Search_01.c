#include<stdio.h>
int main(){
    int n,search;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    printf("Enter the Elements of Array\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Your Entered Array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
    printf("Enter the Element to be searched: ");
    scanf("%d",&search);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == search){
            printf("Element found at [%d]th Location\n",i);
            found = 1;
            break;
        }
    }
    if(found){
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == search)
            {
                printf("Element Repeats at [%d]th Location\n",i);
            }
        }
    }
    if(!found){
        printf("Element not found in array");
    }
    return 0;
}