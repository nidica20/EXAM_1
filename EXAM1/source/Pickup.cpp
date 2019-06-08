// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#include "Pickup.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
namespace Exam1 {

Pickup::Pickup(string color, int capacity) : Vehicle(color)
{
    color = _color; //Setting color of pickup
    capacity = hauling_capacity; //Setting hauling capacity of pickup
    _topspeed = 85; //Setting top speed of pickup to 85 mph
    Wheel Three(432); //Setting radius of pickup to 432 mm
    wheels.push_back(Three); // Placing wheel radius of Pickup in vector
}
        
string Pickup::Description() 
{
    cout << "I am a " << _color << " Pickup truck that can haul " << hauling_capacity << " pounds " 
        << " to carry your large and heavy items! " << endl;
    //Returning full description of Pickup
}
        
int Pickup::get_hauling_capacity() //Unique function for Pickup class
{
    return hauling_capacity; //Returns hauling capacity of pickup if asked description of pick up
}

}