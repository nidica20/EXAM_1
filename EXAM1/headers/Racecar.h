// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#ifndef RACECAR_H_
#define RACECAR_H_
#include "Vehicle.h"

class RaceCar : public Vehicle {
    // Top speed: 250 mph
    // Wheel radius: 305 mm
    private:
        int zero_to_sixty; //Part of unique function for RaceCar class
    public:
        RaceCar::RaceCar(string color, int zeroToSixty) : Vehicle(color) {}
        string Description();
        int get_amount_of_seconds_from_zero_to_sixty();
};

bool isRaceCar(int gallonsOfGasUsedInRace);

#endif