#include "initial.h"

Node::Node(product p) {
    data = p;
    next = NULL;
}

Inventory::Inventory() {
    head = NULL;
    tail = NULL;
}

void Inventory::push_front(product p) {
    Node* newNode = new Node(p);
    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void Inventory::display() {
    if (head == NULL) {
        cout << "The inventory is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << "ID: " << temp->data.id
             << " | Name: " << temp->data.name
             << " | Qty: " << temp->data.quantity
             << " | Price: " << temp->data.price << endl;
        temp = temp->next;
    }
}