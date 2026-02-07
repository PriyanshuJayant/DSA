#include<iostream>
#include<vector>
using namespace std;

bool sortedOrNot(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();

    // bool sorted = false;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;

}
int main(){
    cout << (sortedOrNot() ? "Sorted" : "Not Sorted");
    
    return 0;
}