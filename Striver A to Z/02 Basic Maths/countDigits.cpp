#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
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
void reverse(){
    int n = 5400, reverse = 0 ;
    while (n > 0 ){
        reverse = (reverse * 10) + n % 10;

        n = n/10;
    }
    cout<<reverse;
}
void palindrome(){
    int n = 13331,temp = n, reverse = 0;
    while(n > 0){
        reverse = (reverse * 10) + n % 10;
        n = n/10;
    }
    if (temp == reverse){
        cout<<temp<<" is a Palindrome"<<endl;
    }else{
        cout<<temp<<" is not a Palindrome"<<endl;
    }
}
void armstrong(){
    int n = 371,total = 0,temp = n;//1634
    while (n > 0){
        total = (total) + pow((n % 10), 3);
        n = n/10;
    }
    if (temp == total)
        cout<<temp<<" is a Armstrong Number"<<endl;
    else
        cout<<temp<<" is not a Armstrong Number"<<endl;
}
void divisions(){
    int n = 36;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout<<i<<"\t";
}
void division2(){
    int n = 36;
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++){
        if (n%i == 0){
            ls.push_back(i);
            if ((n/i) != i){
                ls.push_back(n/i);
            }
            
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<"\t";
}
void prime(){
    int n = 11,count = 0,count2 = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            count++;
        }
    }
    (count == 2) ? cout<<n<<" is Prime Number"<<endl : cout<<n<<" is not a Prime Number"<<endl;
    for (int i = 1; i * i <= n; i++){
        if (n%i == 0){
            count2++;
            if ((n/i) != i){
                count2++;
            }
        }
    }
    (count2 == 2) ? cout<<n<<" is Prime Number"<<endl : cout<<n<<" is not a Prime Number"<<endl;
}

int main(){
    int n = 0;
    // cout<<countDigits2(n);
    // reverse();
    // palindrome();
    // armstrong();
    // divisions();
    // division2();
    prime();
}
