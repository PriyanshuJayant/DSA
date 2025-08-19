#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){
    int digits = 0;
    if (n == 0) digits = 1;
    while (n > 0){
        digits++;
        n= n/10;
    }
    cout<<"There are "<<digits<<endl;
}
int countDigits2(int n){
    int count = 0;
    if (n == 0)
        return 1;
    
    count = (int)(log10(n) + 1 );
    return count;
}

int main(){
    int n = 0;
    // countDigits(n);
    cout<<countDigits2(n);
}