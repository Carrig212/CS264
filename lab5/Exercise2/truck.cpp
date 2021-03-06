// William ANDERSON 15494372
#include "truck.h"

/* Constructor */
Truck::Truck(double f) : Vehicle(2, 16, "black", f, 8) {
    cargo = false;
    setClassName("Truck");
}

/* Getter */
bool Truck::hasCargo() const {
    return cargo;
}

/* Setter */
void Truck::setCargo(bool c) {
    cargo = c;
}

/* Printer */
ostream &operator<<(ostream &output, const Truck &t){
    output << t.getClassName() << "\n"
           << "\tNumber of doors: "
           << t.getNumberOfDoors()
           << "\n\tNumber of cylinders: "
           << t.getNumberOfCylinders()
           << "\n\tTransmission type: "
           << t.getTransmissionType()
           << "\n\tColor: " << t.getColor()
           << "\n\tFuel level: "
           << t.getFuelLevel() << "\n";

    if (t.cargo)
        output << "\tThe truck is carrying cargo.\n";

    else
        output << "\tThe truck is not carrying cargo.\n";

    return output;
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
