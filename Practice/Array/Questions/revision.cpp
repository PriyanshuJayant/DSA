#include<iostream>
#include<vector>
using namespace std;

void one(vector<int> arr){
    int sum = 0;
    for(int i : arr){
        sum += i;
    }
    cout<<sum;
}

void two(vector<int> arr){
    int even = 0;
    for(int i : arr){
        if (i % 2 == 0){
            even++;
        }
    }
    (even ? cout<< even << " Even Numbers in Array" : cout<< "No even numbers");
}

void four(vector<int> arr){
    int max = arr[0];
    for(int i : arr){
        if (i > max){
            max = i;
        }
    }
    cout<< max;
}

void six(vector<int> arr){
    for (int i = arr.size() - 1; i >= 0; i--){
        cout<<arr[i] << " " ;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    // one(arr);
    // two(arr);
    // four(arr);
    six(arr);

    return 0;
}