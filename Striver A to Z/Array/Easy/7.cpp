#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void ZeroToEnd(vector<int> &arr, int size){
    
    vector<int> nonZero;
    // Take Non Zero Elements
    for (int i = 0; i < size; i++){
        if (arr[i] != 0)
            nonZero.emplace_back(arr[i]);   
    }
    // Take Size of Zeroes in [arr]
    int zeroesCount = size - nonZero.size();

    for (int i = 0; i < nonZero.size(); i++){
        arr[i] = nonZero[i];
    }

    arr.insert(arr.begin() + nonZero.size(), nonZero.size(), 0);
 
    for (int i = 0; i < size; i++){
        cout<< arr[i]<< " ";
    }
    
}
int main(){
    vector<int> arr = {1,2,0,4,5,0,0,7,8,0,3};
    int size = arr.size();

    ZeroToEnd(arr, size);
    
    return 0;
}