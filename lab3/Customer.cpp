#include <iostream>
#include "Customer.h"

using namespace std;

void printCustomers(Customer &head) {
    Customer* current = &head;

    while (current != NULL) {
        cout << current -> name << endl;
        current = current -> next;
    }
}
