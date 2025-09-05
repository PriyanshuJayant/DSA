#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void printNameNTimes(int i, int n){
    if (i > n) return;
    cout<<"Priyanshu"<<endl;
    printNameNTimes(i + 1, n);
}
void printLinearly(int i, int n){
    if(i > n) return;
    cout<<i<<endl;
    printLinearly(i + 1, n);
}
void printReverse(int i , int n){
    if(i < 1) return;
    cout<<i<<endl;
    printReverse(i - 1, n);
}
void printLinearly1ToN(int i, int n){
    if(i < 1) return;
    printLinearly1ToN(i - 1, n);
    cout<<i<<endl;  // Back Tracking
}
void printLinearNTo1(int i, int n){
    if(i > n) return;// 1 > 5
    printLinearNTo1(i + 1, n);
    cout<<i<<endl;
}
void reverseArray(int arr[], int l, int r){
    if (l >= r){
        return;
    }
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}
void betterReverseArray(int i, int arr[], int n){
    if( i >= n/2){
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    betterReverseArray(i + 1, arr,n);
}
void checkPalindrome(){
    
}

int main(){
    // int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printNameNTimes(1,n);
    // printLinearly(0, n);
    // printReverse(n, n);
    // printLinearly1ToN(n,n);
    // printLinearNTo1(1,n);
    // reverseArray(arr, 0, len - 1);    
    // for (int i = 0; i < len; i++)
        // cout<<arr[i] << " ";

    betterReverseArray(0, arr, n);
    // checkPalindrome();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}