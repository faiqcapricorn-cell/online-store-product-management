#ifndef INITIAL_H
#define INITIAL_H

#include <iostream>
#include <string>
using namespace std;

struct product {
    double id;
    string name;
    double quantity;
    double price;
};

class Node {
public:
    product data;
    Node* next;
    Node(product p);
};

class Inventory {
    Node* head;
    Node* tail;
public:
    Inventory();
    void push_front(product p);
    void insertAfterSecondHighest(product newProduct);
    bool searchID(double sold);
    void moveLastToSecond();
    void display();
};

#endif