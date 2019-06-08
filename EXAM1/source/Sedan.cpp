// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#include "Sedan.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
namespace Exam1 {

Sedan::Sedan(string color, int seats) : Vehicle(color)
{
    _topspeed = 95; //Setting top speed of Sedan to 95 mph
    color = _color; //Setting color of Sedan
    seats = number_of_seats; //Setting number of seats Sedan has
    Wheel Two(381); //Setting wheel radius of Sedan to 381 nm
    wheels.push_back(Two); // Placing wheel radius of Sedan in vector
}
    
string Sedan::Description()
{
    cout << "I am a " << _color << " Sedan with a top speed of " << _topspeed << " and can seat " <<
            number_of_seats << "people comfortably!" << endl;
    //Returning full description of Sedan
}

int Sedan::get_number_of_seats()
{
    return number_of_seats; //Unique function for Sedan class
}

bool isSedan(int seat_capacity) //function for Unit-Testing to see if car is Sedan or not depending on "a" 
{
    if (seat_capacity == 6) 
    {
        return true; //Returns true (is Sedan) if seat capacity of car is equal to 6
    } else {
        return false; //Returns false (not Sedan) if seat capacity is less or greater than 6
    }
}

}