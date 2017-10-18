// William Anderson 15494372

#include <iostream>
#include "Customer.h"

using namespace std;

int main() {

    int n;
    string name;

    cout << "Enter as many customer names as you like: (Input \"end\" to exit)" << endl;

    cin >> name;

    if (name == "end") {
        return 0;
    }

    Customer* head = createList(name);

    while (true) {
        cin >> name;

        if (name == "end") {
            break;
        }

        insertName(head, name);
    }

    n = listLength(head);
    cout << endl << "List length: " << n << endl << "Customer names:" << endl;

    printCustomers(head);

    return 0;
}
