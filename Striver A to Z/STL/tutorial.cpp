#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void pairSTL(){
    pair<int, int> p = {1,3};
    cout<<p.first << " "<< p.second<<endl;

    pair<int, pair<int , int>> a = {5, {6, 7}};
    cout<<a.first<<" "<< a.second.first<<" "<<a.second.second<<endl;

    pair<int, int> arr[] = { {1,2}, {3,4}, {5,6}, {7,8}};
    cout<<arr[0].first<<" "<<arr[0].second<<" "<<arr[1].first;
}

void vectorSTD(){// vector is a container i.e Dynamic in nature
    vector<int> v; // {}
    v.push_back(1);// {1}
    v.emplace_back(2);//{1.2} Faster

    //Vector of a pair

    vector<pair<int , int>> vec;    // {}
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v2(3, 100);  // {100, 100, 100}
    vector<int> v3(5);   //  {0, 0, 0, 0, 0} or garbage value

    vector<int> v4(v2);  //  {100, 100, 100}
    vector<int> v5 = {1,2,3,4};

    // cout<<v5[3]<< " " <<v5.at(0);

    vector<int> v6 = {1,2,3,4,5};
    vector<int>::iterator pointer = v6.begin();
    vector<int>::iterator pointer2 = v6.end();
    pointer2--;


    cout<< *(pointer) << endl;
    cout<< *(pointer2) << endl;
}

int main(){
    // pairSTL();
    vectorSTD();
}
