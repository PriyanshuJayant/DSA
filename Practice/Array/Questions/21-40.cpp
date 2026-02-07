#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

// void twentyOne(){
//     vector<int> arr = {1, 2, 2, 3,3, 2 ,2};
//     int size = arr.size();
//     vector<int> duplicates = {};
//     int total = 0;
//     int duplicate = 0;
//     for (int i = 0; i < size; i++){ 
//         if(arr[i] == -1) continue;
//             for (int j = i + 1; j < size; j++){
//                 if (arr[i] == arr[j] && arr[i] != -1 && arr[j] != -1){ 
//                     if (duplicate < 1){ 
//                         duplicate++;    
//                         total += duplicate; 
//                         arr[j] == -1;
//                     }else{
//                         break;
//                     }
//                     arr[i] = -1;
//                     arr[j] = -1;
//                 }
//             }
//         duplicate = 0;
//     }
//     cout<< total;
//     cout<< endl;
// }

void twenty(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i = i + 2)
        cout<<i<<" : "<<arr[i]<<endl;
}
void twentyOne(){
    int arr[] = {10,2,3,10,5,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        int duplicate = 0;
        int count = 0; 
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j]){
                count++;
                if (count > 1)
                    duplicate++;
            }
        arr[i] = -1;
    }
    int duplicate = 0;
    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if (arr[i] == arr[j])
                arr[i] = -1;
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<endl;
}
void twentyTwo(){
    int arr[] = {10,2,3,40,5,6,1,8, 5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        // for (int j = size - 1; (j > 0 && j != i); j--)
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1;
            }
        if (arr[i] != -1)
            cout<<arr[i]<<endl;
    }
}
void twentyThree(){}
void twentyFour(){}
void twentyFive(){
    int arr[] = {1,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ascending = false;
    for (int i = 0; i < size-1; i++){
        if (arr[i] < arr[i + 1])
            ascending = true;
        else{
            ascending = false;
            break;
        }
    }
    if (ascending)
        cout<<"Ascending Order"<<endl;
    else
        cout<<"Not in Ascending Order"<<endl;
}
void twentySix(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
    }
    for(int x = 0 ; x < n ; x++){
        cout<< arr[x] << " ";
    }
}
void twentySeven(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout<<"Difference between the max "<<max<<" and min "<<min<<" element: "<<max - min<<endl;
}
void twentyEight(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 9, count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > n)
            count++;
    cout<<count<<" Numbers are Greater than "<<n;
}
void twentyNine(){}
void thirty(){}
void thirtyOne(){}
void thirtyTwo(){}
void thirtyThree(){
    // Bubble Sort
    vector<int> arr = {7,6,5,4,3,2,1};
    int n = arr.size();

    // for (int i = 0; i < n - 1 ; i++){
    //     for (int j = 0; j < n - i - 1; j++){
    //         if (arr[i] > arr[j]){
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    

    for(auto i : arr){
        cout<< i << " ";
    }
}
void thirtyFour(){}
void thirtyFive(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0, avg = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
        avg = sum/size;
    }
    for (int i = 0; i < size; i++)
        if (arr[i] > avg)
            cout<<arr[i]<<"\t";
    
    // cout<<avg;
}
void thirtySix(){}
void thirtySeven(){}
void thirtyEight(){}
void thirtyNine(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();

    int old = 3;
    int new_num = 30;
    for (int i = 0; i < n; i++){
        if (arr[i] == old){
            arr[i] = new_num;
        }
    }
    for(auto i : arr){
        cout<< i<< " ";
    }
    
}  
void forty(){
    int arr[] = {1, 2, 2, 3, 1, 1, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++){
        int current = 1;
        if (arr[i] == -1)
            continue;
        else
            cout<< arr[i];
        for (int j = i + 1; j < n; j++){
            if (arr[i] != -1 && arr[i] == arr[j]){
                current++;
                arr[j] = -1;
            }
        }
        if (arr[i] == -1)
            continue;
        else
            arr[i] = -1;
        cout<< " : " << current << endl;
        current = 1;
    }
}
void forty_unordered_map(){
    int arr[] = {1, 2, 2, 3, 1, 1, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++){
    freq[arr[i]]++;
    }
    for (auto i : freq){
        cout << i.first << " -> " << i.second << endl;
    }
}
void forty_map(){
    vector<int> arr = {1,2,2,3,1,1,4,4};
    int n = arr.size();

    map<int, int> freq;

    for (int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }
}

int main(){
    thirtyThree();
    return 0;
}