#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Die.h"

using namespace std;

Die::Die(int n) {
    srand(time(NULL));

    while (n < 4) {
        cout << "Invalid number of sides: number of sides must be four or more." << endl;
        cout << "Try again: ";
        cin >> n;
    }

    sides = n;
    value = 0;
}

int Die::roll() {
    value = (rand() % sides) + 1;

    return value;
}

int Die::getValue() {
    return value;
}

int Die::getNumsides() {
    return sides;
}
