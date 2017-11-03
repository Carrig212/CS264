// William Anderson 15494372

#include <iostream>
#include "Die.h"

using namespace std;

int main() {
    int n;
    int sides;

    cout << "Enter the number of sides you'd like the dice to have: ";
    cin >> sides;

    Die die1(sides);
    Die die2(sides);

    double freq[sides * 2];

    for (int i = 0; i < sides * 2; i++) {
        freq[i] = 0;
    }

    cout << "Enter the number of times you'd like to roll the dice: ";
    cin >> n;

    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        die1.roll();
        die2.roll();
        freq[die1.getValue() + die2.getValue() - 2]++;
    }

    for (int i = 0; i < sides * 2 - 1; i++) {
        cout << (i + 2) << " = " << (freq[i] / (n * 1.0)) * 100 << "%" << endl;
    }

    return 0;
}
