#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n){
    int *start = arr;
    int *end = arr + n - 1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // reverse(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}