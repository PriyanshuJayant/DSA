#include <iostream>
using namespace std;

void reverseNumber(int n)
{
    int temp = 0;

    for (int i = 0; i < 3; i++)
    {
        temp = temp * 10;
        temp += n % 10;
        n = n / 10;
    }
    cout << temp;
}

int main()
{
    int n = 123;
    reverseNumber(n);
}