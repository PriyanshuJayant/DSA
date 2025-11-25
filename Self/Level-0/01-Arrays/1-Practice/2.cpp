#include <iostream>
using namespace std;

void Two(int arr[], int size){
    int largest = arr[0];
    int second = 0;
    for (int i = 0; i < size; i++){
        if (largest < arr[i]){
            second = largest;
            largest = arr[i];
        }
        if (arr[i] < largest && arr[i] > second){
            second = arr[i];
        }
        
    }
    cout << largest << endl;
    cout << second <<endl;
}

int main(){
    int arr[] = {7, 1, 2, 10, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Two(arr, size);

    return 0;
}