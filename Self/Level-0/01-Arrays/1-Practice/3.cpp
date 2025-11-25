#include <iostream>
using namespace std;

void Three(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while (left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {7, 1, 2, 10, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Three(arr, size);

    return 0;
}