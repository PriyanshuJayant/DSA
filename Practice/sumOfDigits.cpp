#include<iostream>
using namespace std;

void sumOfDigits(int n){
    int sum = 0;
    for (int i = 1; i <= 4; i++)
    {
        sum = sum + ( n % 10);
        n = n / 10;
    }
    cout<<sum<<endl;
}
void sumOfDigits2(int n){
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    cout<<sum<<endl;
    
}

int main(){
    int n = 1234;
    sumOfDigits(n);
    sumOfDigits2(n);
}