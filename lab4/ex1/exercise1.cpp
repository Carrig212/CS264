// William Anderson 15494372

#include <iostream>
#include "Die.h"

using namespace std;

int main() {
    int n;
    int sides;

    cout << "Enter the number of sides you'd like the die to have: ";
    cin >> sides;

    Die die(sides);
    double freq[sides];

    for (int i = 0; i < sides; i++) {
        freq[i] = 0;
    }

    cout << "Enter the number of times you'd like to roll the die: ";
    cin >> n;

    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        die.roll();
        freq[die.getValue() - 1]++;
    }

    for (int i = 0; i < die.getNumsides(); i++) {
        cout << (i + 1) << " = " << (freq[i] / (n * 1.0)) * 100 << "%" << endl;
    }

    return 0;
}
