#include<iostream>
#include<vector>
using namespace std;

void seven(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[left] < arr[right]  ){
            int temp = arr[right];
            arr[right] = arr[left];
            arr[left] = temp;
        }
    }
    for(auto i : arr){
        cout<< i<< " ";
    }
}
int main(){
    vector<int> arr = {0,1,0,3,12};
    seven(arr);

    
    return 0;
}