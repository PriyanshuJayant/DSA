#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60};
        int start = 0;
        int n = sizeof(arr)/sizeof(arr[0]);
        int target;
        int left = 0;
        int right = n-1;
        int mid;
        int found = 0;

    printf("Enter the Element to be searched: \n");
    scanf("%d",&target);
    
    while(left <= right){
        mid = left + (right -left)/2;   //Calculate the middle size
        if(arr[mid] == target){
            printf("Element [%d] found at index [%d]\n",target,mid);
            found = 1;
            break; 
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    if(!found){
        printf("Element [%d] not found in array\n",target);
    }



    return 0;
}