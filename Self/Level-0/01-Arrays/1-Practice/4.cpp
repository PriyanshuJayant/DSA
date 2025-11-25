#include<iostream>
using namespace std;

void Four(int arr[], int size, int k){
    k = k % size;
    
    // int rightFirst = size - k;
    // int rightLast = size - 1;
    // int leftFirst = 0;
    // int leftLast = k - 1;

    // for (int i = 0; i < k; i++){
    //     int temp = arr[leftFirst];
    //     arr[leftFirst] = arr[rightFirst];
    //     rightFirst ++;
    //     leftFirst ++;
    //     arr[rightFirst] = temp;
    // }
        int rightIndex = size - k; // starting index of right part
    
    for (int i = 0; i < k; i++) {
        // swap arr[i] with arr[rightIndex + i]
        int temp = arr[i];
        arr[i] = arr[rightIndex + i];
        arr[rightIndex + i] = temp;
    }

    // Print to verify
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    Four(arr, size, k);
    return 0;
}