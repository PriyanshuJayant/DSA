#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void rightRotate(vector<int> &arr, int size, int k){
    k = k % size; // handle k > size
    int temp[k];

    // Step 1: copy last k elements
    for (int i = 0; i < k; i++)
        temp[i] = arr[size - k + i];

    // Step 2: shift remaining elements to the right
    for (int i = size - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Step 3: move temp elements to front
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];

    // Print result
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
}

void leftRotate(vector<int> &arr, int size, int k){
    k = k % size;

    // Step 1: Copy K elements
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
        temp[i] = arr[i];
    
    // Step 2: Shift Elements by k
    for (int i = k; i < size; i++)
        arr[i - k] = arr[i];
    
    // Step 3: Putback temp (Brute Force)
    // int j = 0;
    // for (int i = size - k; i < size; i++){
    //     arr[i] = temp[j];
    //     j++;
    // }

    for (int i = size - k; i < size; i++)
        arr[i] = temp[i - (size - k)];

    for(auto i : arr)
        cout<< i<< " ";

    //* Time Complexity: O(k) + O(n - k) + O(k) = O(n + k) 
    //* Worst Case: O(n)
    //* Space Complexity: O(k)
}

// Custom Function for Reverse
void reverse(vector<int> &arr, int start, int end){
    while (start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate_Optimal(vector<int> &arr, int size, int k){
    k = k % size;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    for(auto i : arr)
        cout<< i << " ";

    //* Time Complexity: O(k) + O(n - k) + O(k) = O(2n) 
    //* Worst Case: O(1)
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int size = arr.size();
    int k = 1;

    // rightRotate(arr, size, k);
    // leftRotate(arr, size, k);
    // leftRotate_Optimal(arr, size, k);
    
    return 0;
}

// 1, 2, 3, 4, 5, 6, 7

// Reverse k = 1,2,3
// 3, 2, 1, 4, 5, 6 ,7

// Reverse (n - k) = 4,5,6,7
// 3, 2, 1, 7, 6, 5, 4

// Reverse Whole Array
// 4, 5, 6, 7, 1, 2, 3