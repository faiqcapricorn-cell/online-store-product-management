#include "initial.h"
using namespace std;
bool Inventory::searchID(double sold) {
    if (head == NULL) {
        cout << "The linked list is empty." << endl;
        return false;
    }

    Node* temp = head;
    while (temp != NULL) {
        if (temp->data.id == sold) {
            cout << "SOLD: " << temp->data.name << " "
                 << temp->data.quantity << " " << temp->data.price << endl;
            return true;
        }
        temp = temp->next;
    }

    cout << "Product with ID " << sold << " not found." << endl;
    return false;
}