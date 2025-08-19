#include<iostream>
using namespace std;

void SecondLargest(int arr[] , int size){
    int temp = 0;
    int second = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
        second = temp;
    }
    cout<<temp<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    SecondLargest(arr, size);
}