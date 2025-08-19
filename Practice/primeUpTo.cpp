#include<iostream>
using namespace std;

int main(){
    int num = 50;
    int count = 0;
    int prime;
    for (int i = 1; i <= num; i++)//2
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                prime = j;
            }
        }
        if (count == 2)
        {
            cout<<prime<<endl<<endl;
        }
        count = 0;
    }
}