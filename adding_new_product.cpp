#include "initial.h"

void Inventory::insertAfterSecondHighest(product newProduct) {
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
        return;
    }

    double highest = head->data.price;
    double second = -1;
    Node* temp = head->next;

    while (temp != NULL) {
        double price = temp->data.price;
        if (price > highest) {
            second = highest;
            highest = price;
        } else if (price < highest && price > second) {
            second = price;
        }
        temp = temp->next;
    }

    if (second == -1) {
        cout << "No second highest price exists." << endl;
        return;
    }

    Node* trace = head;
    while (trace->data.price != second) {
        trace = trace->next;
    }

    Node* newNode = new Node(newProduct);
    newNode->next = trace->next;
    trace->next = newNode;
    if (trace == tail) {
        tail = newNode;
    }
}