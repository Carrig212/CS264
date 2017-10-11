#pragma once

using namespace std;

struct Customer {
    string name;
    Customer* next;
};

void printCustomers(Customer &head);
