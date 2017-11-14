// William ANDERSON 15494372
#include <iostream>

using std::cout;
using std::endl;

#include "car.h"

/* Constructor */
Car::Car(string name, string color) {
    this -> name = name;
    this -> color = color;
    maxSpeed = 95;
    engineValves = 4;
}

/* Getters */
int Car::getMaxSpeed() const {
    return maxSpeed;
}

int Car::getEngineValves() const {
    return engineValves;
}

string Car::getName() const {
    return name;
}

string Car::getColor() const {
    return color;
}

/* Setters */
void Car::setMaxSpeed(int s) {
    maxSpeed = ((s >= 0 && s < 250) ? s : 40);
}

void Car::setEngineValves(int v) {
    engineValves = ((v >= 0 && v < 50) ? v : 4);
}

/* Printer */
void Car::print() const {
    cout << "Car: " << name << " is " << color << " and has a "
         << engineValves << "-valve engine. MAX SPEED = "
         << maxSpeed << " mph. " << endl;
}


/**************************************************************************
* (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
* Hall. All Rights Reserved.                                             *
*                                                                        *
* DISCLAIMER: The authors and publisher of this book have used their     *
* best efforts in preparing the book. These efforts include the          *
* development, research, and testing of the theories and programs        *
* to determine their effectiveness. The authors and publisher make       *
* no warranty of any kind, expressed or implied, with regard to these    *
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or       *
* consequential damages in connection with, or arising out of, the       *
* furnishing, performance, or use of these programs.                     *
*************************************************************************/
