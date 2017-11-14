// William ANDERSON 15494372
#include <iostream>

using std::cout;
using std::endl;

#include "racecar.h"

/* Constructor */
Racecar::Racecar(string n, string c, string s): Car(n, c) {
    sponsor = s;
    gearbox = 6;
    parachuteDeployed = false;
}

/* Setter */
void Racecar::setGearbox(int gears) {
    gearbox = ((gears <= 10 && gears >= 0) ? gears : 6);
}

/* Custom Method */
void Racecar::useParachute() {
    parachuteDeployed = true;
}

/* Printer */
void Racecar::print() const {
    Car::print();

    cout << getName() << " also has " << gearbox
         << " gears and is sponsored by " << sponsor << ". ";

    if (parachuteDeployed)
        cout << Car::getName() << " has used its parachute." << endl;
    else
        cout << Car::getName() << " has not used its parachute." << endl;
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
