#include<iostream>
using namespace std;

void pattern10(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        pattern10(n);
    }
    
    // pattern10(n);
}