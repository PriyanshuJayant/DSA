#include <iostream>
using namespace std;

int RemoveDuplicate(int arr[], int n){
    if (n == 0) return 0;

    int i = 0;
    for (int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main(){
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newLength = RemoveDuplicate(arr, n);

    cout << "New Length = " << newLength << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}