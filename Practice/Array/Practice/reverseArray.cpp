#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int newArray[size];

    for (int i = size; i >= 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            newArray[j] = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<newArray[i]<<endl;
    }
    
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size: "<<size<<endl;
    reverseArray(arr, size);
}