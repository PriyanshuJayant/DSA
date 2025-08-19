#include <iostream>
using namespace std;

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // upper half of the diamond
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // lower half of the diamond
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pattern9(n);
}
