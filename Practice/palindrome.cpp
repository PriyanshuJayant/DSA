#include<iostream>
using namespace std;

void palindrome(int n){
    int temp = 0;
    int compare = n;
    while (n > 0)
    {
        temp = temp * 10;
        temp += n % 10;
        n = n / 10;
    }
    if (temp == compare)
    {
        cout<<"This is a Palindrome: "<<temp;
    }else if(temp != compare){
        cout<<"This is not a Palindrome: "<<temp;
    }    
}

int main(){
    int n = 12321;
    palindrome(n);
}