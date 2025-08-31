#include<iostream>
using namespace std;

void pattern8(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k <= i; k++){
            cout<<" ";
        }
        for (int j = i; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern8_1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*n-(2*i+1) ; k++)
        {
            cout<<"*";
        }
        for (int l = 0; l < i ; l++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // pattern8(n);
    pattern8_1(n);
}