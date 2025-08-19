#include<iostream>

class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this -> value = value;
        next = nullptr;
    }
        
};

class LinkedList{
    LinkedList(int value){}
    void append(int value){}
    void prepend(int value){}
    void insert(int value){}

    void append(int value){
        Node* newNode = new Node(value);
        
    }
};