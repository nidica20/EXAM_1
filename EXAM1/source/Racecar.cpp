// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

// STEP 2: Define the RaceCar, Sedan, and Pickup classes as described
// in the UML diagram. Make sure to add functionality to each kind of class.
// Be sure to use a separate header file and a CPP file for each class.

#include "Racecar.h"
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
namespace Exam1 {

RaceCar::RaceCar(string color, int zeroToSixty) : Vehicle(color) 
{
    _color = color; //Setting color of Racecar
    _topspeed = 250; //Setting top speed of RaceCar to 250 mph
    Wheel One(305); //Setting wheel radius of RaceCar to 305 mm
    wheels.push_back(One); // Placing wheel radius of RaceCar in vector
    zeroToSixty = zero_to_sixty; //Setting number of seconds Racecar takes to go from 0 to 60 mph
}
        
string RaceCar::Description()
{
    cout << "I am a " << _color << " RaceCar and I can go from 0 to 60 mph in " << zero_to_sixty << " seconds. My top speed is " << _topspeed << " mph! YAHOOOOOOO! " << endl;
        //Returning full description of RaceCar
}
        
int RaceCar::get_amount_of_seconds_from_zero_to_sixty() 
{ 
    return zero_to_sixty; //Unique function that returns amount of seconds race car takes to 
    //go from 0 to 60 mph
}

bool isRaceCar(int gallonsOfGasUsedInRace) //function for Unit Testing to see if Car is Racecar by amount of gas used
{
    if(gallonsOfGasUsedInRace >= 6000)
    {
        return true; //Returns true (is Racecar) if uses more than 6000 gallons of gas at a time
    }else {
        return false; //Returns false (is not Racecar) if it does not use more than 6000 gallons of gas at a time
    }
}

}