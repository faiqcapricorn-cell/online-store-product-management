#include "initial.h"
#include <limits>

product readProduct() {
    product p;
    cout << "Enter ID: ";
    cin >> p.id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter name: ";
    getline(cin, p.name);
    cout << "Enter quantity: ";
    cin >> p.quantity;
    cout << "Enter price: ";
    cin >> p.price;
    return p;
}

int main() {
    Inventory store;
    int choice;

    do {
        cout << "\n===== Online Store Product Management =====" << endl;
        cout << "1. Add product at front" << endl;
        cout << "2. Add product after second highest price" << endl;
        cout << "3. Sell product (search by ID)" << endl;
        cout << "4. Display all products" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                product p = readProduct();
                store.push_front(p);
                cout << "Product added." << endl;
                break;
            }
            case 2: {
                product p = readProduct();
                store.insertAfterSecondHighest(p);
                break;
            }
            case 3: {
                double id;
                cout << "Enter product ID: ";
                cin >> id;
                store.searchID(id);
                break;
            }
            case 4:
                store.display();
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}   