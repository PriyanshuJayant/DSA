#include<iostream>
#include<string>
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

int main(){
    int n = 3;
    // printNameNTimes(1,n);
    // printLinearly(0, n);
    // printReverse(n, n);
    // printLinearly1ToN(n,n);
    printLinearNTo1(1,n);
}