#include<iostream>
#include<cmath>//NAN
using namespace std;

void one(){
    int arr[] = {1,2,3,4,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    cout<<sum;
}
void two(){
    int arr[] = {12,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            count++;
    cout<<count<<endl;
}
void three(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            count++;
    cout<<count<<endl;
}
void four(){
    int arr[] = {1,2,3,40,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = arr[0];//1
    int largest = 0;//1
    for (int i = 0; i < size; i++)
        if (arr[i] >= count){
            count = arr[i];
            largest = arr[i];
        }
    cout<<largest;
}
void five(){
    int arr[] = {10,2,3,40,5,6,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = arr[0];
    int smallest = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] <= count){
            count = arr[i];
            smallest = arr[i];
        }
    cout<<smallest;
}
void six(){
    int arr[] = {10,2,3,40,5,6,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = size - 1; i >= 0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    for (int i = 1; i < size + 1; i++)
        cout<<arr[size - i]<<" ";
}
void seven(){
    int arr[] = {10,2,3,40,5,6,1,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int tempArr[size];
    for (int i = 0; i < size; i++){
        tempArr[i] = arr[i];
        cout<<tempArr[i]<<" ";
    }
}
void eight(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int search = 5;
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == search){
            count++;
            cout<<search<<" is found at ["<<i<<"]th Location "<<count<<" Times"<<endl;
        }
    if (count = 0)
        cout<<"Element Not found";
}
void nine(){
    int arr[] = {10,2,3,40,5,6,1,8, 5, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int search = 5;
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == search){
            count++;
        }
    if (count != 0)
        cout<<"Frequency of "<<search<<" is "<<count<<" times";
    else
        cout<<"Element Not Found";
}
void ten(){
    int arr[] = {0,2,3,0,5,6,-1,8, 5, -69};
    int size = sizeof(arr)/sizeof(arr[0]);
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] == 0)
            zero++;
        else if(arr[i] < 0)
            negative++;
        else if(arr[i] > 0)
            positive++;
    cout<<"Positive: "<<positive<<"\n"<<"Negative: "<<negative<<"\n"<<"Zero: "<<zero<<endl;
}
void eleven(){
    int arr[] = {10,2,3,41,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int total = 0;
    for (int i = 0; i < size; i++)
        total += arr[i];
    cout<<total/size;
}
void twelve(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0){
            cout<<arr[i]<<"\t";
            count++;
        }
    if (count == 0)
        cout<<"There are no Even Elements";
}
void thirteen(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0){
            cout<<arr[i]<<"\t";
            count++;
        }
    if (count == 0)
        cout<<"There are no Even Elements";
}
void fourteen(){
    int arr[] = {10,2,-3,40,5,6,1,8, -5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        if (arr[i] < 0)
            arr[i] = 0;
        cout<<arr[i]<<"\t";
    }
}
void fifteen(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int exists = 5;
    for (int i = 0; i < size; i++)
        if (arr[i] == exists){
            cout<<exists<<" Exists at ["<<i<<"]th Index";
            break;
        }
}
void sixteen(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int search = 5;
    for (int i = 0; i < size; i++)
        if (arr[i] == search)
            cout<<"Element Found at : "<<i<<" Index"<<endl;
}
void seventeen(){
    int arr[] = {10,2,3, 7, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int mul = 1;
    for (int i = 0; i < size; i++){
        if (arr[i] == 0)
            arr[i] = 1;
        mul  = mul * arr[i];
    }
    cout<<mul;
}
void eighteen(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 3 == 0){
            count++;
            cout<<arr[i];
        }
    cout<<"Total Elements Divisible by 3: "<<count<<endl;
}
void nineteen(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
}
void twenty(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i = i + 2)
        cout<<i<<" : "<<arr[i]<<endl;
}
void twentyOne(){
    int arr[] = {10,2,3,10,5,6,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    for (int i = 0; i < size; i++){
        int duplicate = 0;
        int count = 0; 
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j]){
                count++;
                if (count > 1)
                    duplicate++;
            }
        arr[i] = -1;
    }
    int duplicate = 0;
    for (int i = 0; i < size; i++)
        for (int j = i+1; j < size; j++)
            if (arr[i] == arr[j])
                arr[i] = -1;
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<endl;
}
void twentyTwo(){
    int arr[] = {10,2,3,40,5,6,1,8, 5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        // for (int j = size - 1; (j > 0 && j != i); j--)
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1;
            }
        if (arr[i] != -1)
            cout<<arr[i]<<endl;
    }
}
void twentyThree(){}
void TwentyFour(){}
void twentyFive(){
    int arr[] = {1,2,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ascending = false;
    for (int i = 0; i < size-1; i++){
        if (arr[i] < arr[i + 1])
            ascending = true;
        else{
            ascending = false;
            break;
        }
    }
    if (ascending)
        cout<<"Ascending Order"<<endl;
    else
        cout<<"Not in Ascending Order"<<endl;
}
void twentySix(){}
void twentySeven(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout<<"Difference between the max "<<max<<" and min "<<min<<" element: "<<max - min<<endl;
}
void twentyEight(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 9, count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > n)
            count++;
    cout<<count<<" Numbers are Greater than "<<n;
}
void twentyNine(){}
void thirty(){}
void thirtyOne(){}
void thirtyTwo(){}
void thirtyThree(){}
void thirtyFour(){}
void thirtyFive(){
    int arr[] = {10,2,3,40,5,6,1,8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0, avg = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
        avg = sum/size;
    }
    for (int i = 0; i < size; i++)
        if (arr[i] > avg)
            cout<<arr[i]<<"\t";
    
    // cout<<avg;
}
void thirtySix(){}
void thirtySeven(){}

/*--------------------------------------------------*/
int main(){

}

    // int arr[] = {10,2,3,40,5,6,1,8, 5};
    // int size = sizeof(arr)/sizeof(arr[0]);