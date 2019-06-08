// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#ifndef PICKUP_H_
#define PICKUP_H_
#include "Vehicle.h"

class Pickup : public Vehicle{
    // Top speed: 85 mph
    // Wheel radius: 432 mm
    private:
        int hauling_capacity;
    public:
        Pickup(string color, int capacity) : Vehicle(color) {}
        string Description();
        int get_hauling_capacity();
};

bool isPickup(int weight);

#endif