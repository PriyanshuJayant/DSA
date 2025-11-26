#include<iostream>
using namespace std;

void Sorted(int arr[], int size){
    int temp = 0;
    for (int i = 0; i < size - 1; i++){
        if (arr[i] > arr[i + 1]){
            temp ++;
            break;
        }
    }
    temp == 0 ? cout<< "Array is Sorted"<<endl : cout<< "Array is not Sorted"<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    Sorted(arr, size);

    
    return 0;
}