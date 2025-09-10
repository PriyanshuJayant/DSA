#include <iostream>
using namespace std;

void reverseNumber(int n){
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        temp = temp * 10;
        temp += n % 10;
        n = n / 10;
    }
    cout << temp;
}

void reverseNumber2(int n){
    long long int len = abs(n);
    long long int count = 0;
    while (len > 0){
        len /= 10;
        count ++;
    }
    cout<<count;
    
}

int main()
{
    int n = 1534236469;
    // reverseNumber(n);
    reverseNumber2(n);
}