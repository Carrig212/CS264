// William ANDERSON 15494372

#include "parkinglot.h"
#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

#include <vector>
#include <iostream>

using namespace std;

ParkingLot::ParkingLot() : vehicles(0){
    count = 0;
}

ParkingLot::~ParkingLot() {}

void ParkingLot::addVehicle(Vehicle *v) {
    vehicles.push_back(v);
    count++;
}

void ParkingLot::printVehicles() const {
    for (int i = 0; i < vehicles.size(); i++) {
        vehicles[i].print();
    }
}

int ParkingLot::getVehicleCount() const {
    return count;
}
