#include<iostream>
using namespace std;

void LargestInArray(int arr[], int size){
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    cout<<temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    LargestInArray(arr, size);
}