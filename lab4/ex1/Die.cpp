// William Anderson 15494372

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Die.h"

using namespace std;

Die::Die(int n) {
    srand(time(NULL));

    if (n < 4) {
        cout << "Invalid number of sides: defaulting to 6." << endl;
        sides = 6;
    } else {
        sides = n;
    }

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
