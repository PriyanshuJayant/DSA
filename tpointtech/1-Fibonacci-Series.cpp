#include<iostream>
using namespace std;

// Input: 10
// Output: 0 1 1 2 3 5 8 13 21 34

void whileLoop(int n, int x = 0, int y = 1, int z = 0){
    while (z <= n)
    {
        cout<<z<<endl;
        x = y;
        y = z;
        z = x + y;
    }
}
int main(){
    int n = 10;
    whileLoop(n);

}