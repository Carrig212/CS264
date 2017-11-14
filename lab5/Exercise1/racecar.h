// William ANDERSON 15494372
#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"

class Racecar: public Car {
    public:
        /* Constructor */
        Racecar(string, string, string);

        /* Setter */
        void setGearbox(int);

        /* Custom Method */
        void useParachute();
        
        /* Printer */
        void print() const;

    private:
        /* Private Members */
        int gearbox;
        string sponsor;
        bool parachuteDeployed;
};

#endif

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
