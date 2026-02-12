#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Remove Duplicates from Sorted Array itself and Return the number of Unique Elements

vector<int> removeDuplicate_Brute(vector<int> &arr){
    int n = arr.size() - 1;
    set<int> st;
    for (int i : arr)
        st.insert(i); // O(n log n)

    arr.resize(st.size());
    int i = 0;
    for(auto it : st){ // O(n)
        arr[i] = it;
        i++;
    }

    return arr;
    //* Time Complexity: O(n log n + n)
    //* Space Complexity: O(n)
}

vector<int> removeDuplicate_Optimal(vector<int> &arr){
    int i = 0;
    
    for (int j = 1; j < arr.size(); j++){ // O(n)
        if(arr[j] != arr[i]){
            arr[i + 1] = arr[j];
            i++;
        }
    }
    arr.resize(i + 1); // O(1)
    return arr;
    // * Time Complexity: O(n + 1)
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3,4,5,5};

    // Brute Force
    // for(auto i : removeDuplicate_Brute(arr))
    //     cout<< i << " ";

    for(auto i : removeDuplicate_Optimal(arr))
        cout<< i << " ";
        
    
    return 0;
}