// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#ifndef SEDAN_H_
#define SEDAN_H_
#include "Vehicle.h"

class Sedan : public Vehicle {
    // Top speed: 95 mph
    // Wheel radius: 381 mm
    private:
        int number_of_seats;
    public:
        Sedan(string color, int seats) : Vehicle(color) {}
        string Description();
        int get_number_of_seats();
};

bool isSedan(int seat_capacity);

#endif