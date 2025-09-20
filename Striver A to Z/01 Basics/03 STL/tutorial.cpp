#include <bits/stdc++.h>
#include <iostream>
#include<stack>
#include<deque>
#include<algorithm>
#include <unordered_map>
using namespace std;

void pairSTL()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> a = {5, {6, 7}};
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first;
}

void vectorSTD()
{                      // vector is a container i.e Dynamic in nature
    vector<int> v;     // {}
    v.push_back(1);    // {1}
    v.emplace_back(2); //{1.2} Faster

    // Vector of a pair

    vector<pair<int, int>> vec; // {}
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v2(3, 100); // {100, 100, 100}
    vector<int> v3(5);      //  {0, 0, 0, 0, 0} or garbage value

    vector<int> v4(v2); //  {100, 100, 100}
    vector<int> v5 = {1, 2, 3, 4};

    // cout<<v5[3]<< " " <<v5.at(0);

    vector<int> v6 = {1, 2, 3, 4, 5};
    vector<int>::iterator pointer = v6.begin();
    vector<int>::iterator pointer2 = v6.end();
    pointer2--;
    vector<int>::iterator pointer3 = v6.end() - 1;

    // cout<< *(pointer) << endl;
    // cout<< *(pointer2) << endl;
    // cout<< *(pointer3) <<endl;

    //  ---------------Printing Vector-----------------------
    // for(vector<int>::iterator it = v6.begin(); it != v6.end(); it++)
    //     cout<< *(it) << " ";
    // cout<<endl;
    // for(auto it = v6.begin(); it != v6.end(); it++)
    //     cout<< *(it) << " ";
    // cout<<endl;
    // for (auto it : v6)
    //     cout << it << " ";
    // cout << endl;

    //  ------------------Deleting---------------------------
    // v6.erase(v6.begin(), v6.begin() + 5);//[start, end]
    // for (auto it : v6)
    //     cout << it << " ";
    // cout << endl;

    //  ---------------------Inserting---------------------
    vector<int> v7(2, 100);            // {100, 100}
    v7.insert(v7.begin() + 1, 3, 300); // {100, 300, 300, 300, 100}

    // cout << v6.size();

    v6.pop_back(); // 5

    v6.swap(v7); //swap 2 vectors no matter the size

    v6.clear();// erases the entire vector

    for (auto it : v6)
        cout<< it << " ";
}

void List(){
    list<int> ls;
    ls.push_back(2);// {2}
    ls.emplace_back(4);// {2,4}
    ls.push_front(5);// {5,2,4}
    ls.emplace_front();//   {2,4}
}

void myDeque(){
    deque<int> dq;
    dq.push_back(2);// {2}
    dq.emplace_back(4);// {2,4}
    dq.push_front(5);// {5,2,4}
    dq.emplace_front();//   {2,4}
}

void myStack(){
    stack<int>st;
    st.push(1); //  {1}
    st.push(2); //  {2,1}
    st.push(3); //  {3,2,1}
    st.push(4); //  {4,3,2,1}
    st.emplace(5);//{5,4,3,2,1}

    cout << st.top() << endl;//  prints 5

    st.pop();   // {4,3,2,1}

    cout << st.top() << endl;// 4

    cout << st.size() << endl;// 4

    cout << st.empty() << endl;// false

    stack<int> st1, st2;
    st1.swap(st2);

}


int main()
{
    // pairSTL();
    // vectorSTD();
    // List();
    // myDeque();
    myStack();
}
