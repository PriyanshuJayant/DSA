#include<iostream>
#include<vector>
using namespace std;

vector<int> size(vector<int>& nums){
    int size = nums.size();
    return size;
}
int main(){
    vector<int> nums = {1,2,3,4};
    cout<<size(nums);
    
    return 0;
}