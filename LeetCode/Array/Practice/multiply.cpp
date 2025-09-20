#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mul[size] = {};

    
    for (int i = 0; i < size; i++)
    {
            int total = 1;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
             total=total;   
            }
            else{
            total=total*arr[j];
            }
            
        }
        cout<<total<<endl;
    }
    

    return 0;
}