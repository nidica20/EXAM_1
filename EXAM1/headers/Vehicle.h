// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#ifndef VEHICLE_H_
#define VEHICLE_H_
#include "Wheel.h"

// STEP 1: Complete the implementation of the Vehicle base class
// as described in the UML diagram
class Vehicle
{
    protected:
        string _color;
        int _topspeed;
        vector<Wheel> wheels;
    public:
        Vehicle(string color);
        virtual string Description() = 0;
};

#endif