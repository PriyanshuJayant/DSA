#include<iostream>
using namespace std;

void rotate2(int arr[], int size, int k){
    k = k % size; // handle k > size

    int temp[k];

    // Step 1: copy last k elements
    for (int i = 0; i < k; i++){
        temp[i] = arr[size - k + i];
    }

    // Step 2: shift remaining elements to the right
    for (int i = size - 1; i >= k; i--){
        arr[i] = arr[i - k];
    }

    // Step 3: move temp elements to front
    for (int i = 0; i < k; i++){
        arr[i] = temp[i];
    }

    // Print result
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void rotate(int arr[],int size, int k){
    int temp[k];

    for (int i = 0; i <= k; i++){
        temp[i] = arr[i];
        cout<< temp[i];
    }
    cout<<endl;
    int temp_k = k;
    for (int i = 0; i < size; i++){
        arr[i] = arr[k + 1];
        k++;
    }
    k = temp_k;
    for (int i = k + 1; i < size; i++){
        arr[i] = temp[0];
    }


    for (int i = 0; i < size; i++){
        cout<< arr[i]<<endl;    
    }
    
    // cout<< (k + 1) << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    // rotate(arr, size, k);
    rotate2(arr, size, k);
    
    return 0;
}