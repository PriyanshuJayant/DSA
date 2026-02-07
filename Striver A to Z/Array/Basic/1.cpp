#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void largest_Brute(){
    vector<int> arr = {6,3,2,8,6,0,1};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(auto i : arr)
    cout<< i << " "; 
    cout<< "\n" << "Largest Element: " <<arr[n - 1] << endl;
}

void largest_Optimal(){
    vector<int> arr = {6,3,2,8,6,0,1};
    int largest = arr[0]; // 6
    int n = arr.size();
    for (int i = 1; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];
    cout<< largest;
}

int main(){
    // largest_Brute(); // O(n Log n)
    largest_Optimal(); // O(n)
    
    return 0;
}