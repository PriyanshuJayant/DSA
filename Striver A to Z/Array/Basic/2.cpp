#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int secondLargest_Brute(){ 
    vector<int> arr = {4,2,7,1,9,9,9,0,2,10};
    int n = arr.size() - 1;

    sort(arr.begin(), arr.end());

    return arr[n - 1];
    // O(n log n)
}

int secondLargest_Better(){ 
    // vector<int> arr = {4,2,7,1,9,9,9,0,2,10};
    vector<int> arr = {1,7,7,7,7,7,7,7};
    int n = arr.size() - 1;
    if (arr.empty())
        return 0;

    sort(arr.begin(), arr.end());

    int largest = arr[n];
    int second = 0;
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] != largest){
            second = arr[i];
            break;
        }
    }
    return second;
    // O(n log n)
}

int secondLargest_Better2(){
    vector<int> arr = {1,2,4,6,7,7,5};

    int n = arr.size();
    int largest = arr[0];

    // O(n)
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    
    int second = -1;
    // O(n)
    for (int i = 0; i < n; i++){
        if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
        
    }
    return second;
    // Time Complexity: O(n + n) = O(2n) 
}

int secondLargest_Optimal(vector<int> &arr){
    int n = arr.size();
    int largest = arr[0];
    int second = -1;
    if (n < 2) return -1;

    for (int i = 1; i < n; i++){
        if (arr[i] > largest ){
            second = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > second){
            second = arr[i];
        }
    }

    return second;
    // Time Complexity: O(n)
}
int secondSmallest_Optimal(vector<int> &arr){
    int n = arr.size();
    if (n < 2) return -1;

    int smallest = arr[0];
    int second = INT_MAX;

    for (int i = 1; i < n; i++){
        if (arr[i] < smallest){
            second = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
    // Time Complexity: O(n)
}

vector<int> secondLargestAndSmallest_Optimal(vector<int> &arr){
    int secondLargest = secondLargest_Optimal(arr);
    int secondSmallest = secondSmallest_Optimal(arr);

    return {secondLargest, secondSmallest};
}


int main(){
    vector<int> arr = {1,2,4,6,7,5,9,8};
    
    vector<int> result = secondLargestAndSmallest_Optimal(arr);

    for(int i : secondLargestAndSmallest_Optimal(arr))
        cout<< i << " ";
    
    return 0;
}