#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &arr,int size){
    int temp = arr[0];
    for (int i = 1; i < size; i++){
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
    for (int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;  
}

void rotate_1(vector<int> &arr, int size){
    int temp = arr[0];

    for (int i = 1; i < arr.size(); i++)
        arr[i - 1] = arr[i];
    
    arr[size] = temp;
    cout << "Size: "<< size << endl;

    for(auto i : arr)
        cout<< i<< " ";
    // Time Complexity: O(n)
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int size = arr.size() - 1;

    rotate_1(arr, size);
    
    return 0;
}