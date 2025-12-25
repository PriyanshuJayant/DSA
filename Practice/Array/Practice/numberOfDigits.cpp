#include<iostream>
using namespace std;

void numberOfDigits(int n){
    int temp = n;
    int count = 0;

    if (n == 0)
    {
        count = 1;
    }else{
        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }   
    }
    cout<<count;
}

int main(){
    int n = 1234;
    numberOfDigits(n);
}