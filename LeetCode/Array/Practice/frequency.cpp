#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,3,1,5,98};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tempArr[size] = {};
    int visited = -1;

    for (int i = 0; i < size; i++)
    {
        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = visited;
                count++;
            }
        }

        // if (arr[i] != visited)
        // {
            tempArr[i] = count;
        // }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != visited)
        {
            cout << arr[i] << ":" << tempArr[i] << endl;
        }
    }

    return 0;
}
