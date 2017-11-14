// William Anderson 15494372

#pragma once

using namespace std;

class Die {
    int sides;
    int value;
public:
    int roll();
    int getValue();
    int getNumsides();
    Die(int); // Constructor
};
