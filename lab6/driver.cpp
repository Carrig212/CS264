// William ANDERSON 15494372

#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   Taxi cab( 3.3 );
   Truck mack( 7.54 );





   parkingLot[ 0 ] = &cab;
   parkingLot[ 1 ] = &mack;

   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n";

   for ( int i = 0; i < parkingLot.size(); i++ ) {



      cout << endl;
      cout << endl;
   }
   return 0;
}
