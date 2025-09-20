#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,10,3,2,100,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int small = 0;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                small = arr[i];
            }   
        }        
    }
    cout<<small;
    
    return 0;
}