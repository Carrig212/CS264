// William Anderson 15494372

#pragma once

using namespace std;

struct Customer {
    string name;
    Customer* next;
};

Customer* createList(string name);
void insertName(Customer* head, string name);
int listLength(Customer* head);
void printCustomers(Customer *head);

//Lab 5 version
void printCustomers(Customer &head);
