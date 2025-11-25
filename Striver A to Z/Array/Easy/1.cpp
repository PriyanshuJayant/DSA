#include<iostream>
using namespace std;

void array1(int arr[] ,int size){
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;
    
}

int main(){
    int arr[] = {3,6,1,7,9,40,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    array1(arr ,size);
}