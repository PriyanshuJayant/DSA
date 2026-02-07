#include<iostream>
#include<string.h>
using namespace std;

void One(){
    char str[] = {'r', 'a', 'w', '\0'};
    cout<< str;
}
int main(){
    One();
    
    return 0;
}