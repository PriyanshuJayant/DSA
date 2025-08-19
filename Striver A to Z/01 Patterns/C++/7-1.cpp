#include<iostream>
using namespace std;

void pattern7(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    pattern7(n);
}