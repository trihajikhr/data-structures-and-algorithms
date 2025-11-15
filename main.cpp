#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<string>
#include<numeric>
using namespace std;


namespace linkedlist {

template <class T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val) : data(val), next(nullptr) {}
};

template <class T>
class LinkedList {
    Node<T>* head;
    Node<T>* temp;
    Node<T>* front;
    Node<T>* back;

public:

}

}


auto main() {

}