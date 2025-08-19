#include<stdio.h>
int main(){
    int arr[] = {32,97,12,66,18,90,64};
    int search;
    printf("Enter the element to be Searched: ");
    scanf("%d",&search);
    int found = 0;
    for(int i = 0; i <= 6; i++){
        if(arr[i] == search){
            printf("Element found at Index [%d]",i);
            found = 1;
            break;
        }
    }
    if(found != 1){
        printf("Element not found");
    }
    return 0;
}