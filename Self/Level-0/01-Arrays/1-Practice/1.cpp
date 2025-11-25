#include <iostream>
using namespace std;

void One(int arr[], int size){
    int largest = arr[0];
    if (size <= 0){
        cout << "Array should have atleast one Element" << endl;
        return;
    }

    for (int i = 0; i < size; i++){
        if (largest < arr[i]){
            largest = arr[i];
        }
    }
    cout << largest << endl;
}

int main(){
    // Test Case 1
    int arr[] = {3, 7, 2, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    One(arr, size);

    // Test Case 2
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    One(arr1, size1);

    // Test Case 3
    int arr2[] = {5, 4, 3, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    One(arr2, size2);

    // Test Case 4
    int arr4[] = {5, 5, 5, 5, 5};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    One(arr4, size4);

    // Test Case 5
    int arr5[] = {-1, -5, -3, -10, -2};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    One(arr5, size5);

    // Test Case 6
    int arr7[] = {999999999, 1000000000, -1000000000};
    int size7 = sizeof(arr7) / sizeof(arr7[0]);
    One(arr7, size7);

    int arr8[] = {10};
    int size8 = sizeof(arr8) / sizeof(arr8[0]);
    One(arr8, size8);

    int arr9[] = {0, -10, -20, -30};
    int size9 = sizeof(arr9) / sizeof(arr9[0]);
    One(arr9, size9);

    return 0;
}