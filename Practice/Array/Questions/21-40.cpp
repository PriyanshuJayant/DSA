#include<iostream>
using namespace std;
#include<vector>

void twentyOne(){
    vector<int> arr = {1, 2, 2, 3,3, 2 ,2};
    int size = arr.size();
    vector<int> duplicates = {};

    int total = 0;
    int duplicate = 0;
    for (int i = 0; i < size; i++){ 
        if(arr[i] == -1) continue;

            for (int j = i + 1; j < size; j++){
                if (arr[i] == arr[j] && arr[i] != -1 && arr[j] != -1){ 

                    if (duplicate < 1){ 
                        duplicate++;    
                        total += duplicate; 
                        arr[j] == -1;
                    }else{
                        break;
                    }
                    arr[i] = -1;
                    arr[j] = -1;
                }
            }
        duplicate = 0;
    }
    cout<< total;
    cout<< endl;
}
int main(){
    twentyOne();
    
    return 0;
}