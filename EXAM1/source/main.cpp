// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.
#include <iostream>
#include <string>
#include <vector>
#include "Pickup.h"
#include "Racecar.h"
#include "Sedan.h"
#include "Vehicle.h"
#include "Wheel.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace Exam1 {

int main()
{
    Vehicle * Garage[3];

    // STEP 3: Assign ONE RaceCar, ONE Sedan, AND ONE Pickup object to each of the elements
    // in the Garage array. Remember the classes are defined in the namespace Exam1. 
    //Garage[0] = ???
    //Garage[1] = ???
    //Garage[2] = ???

    Garage[0] = new RaceCar("Flaming Orange", 3);
    Garage[1] = new Sedan("Metallic Grey", 6);
    Garage[2] = new Pickup("Midnight Black", 8);

    for (int i = 0; i < 3; ++i)
    {
        // The method Description() should display out like
        // "I am a red sedan (or racecar/pickup) and I can go 95 (or 250 or 85) mph"
        cout << Garage[i]->Description();

        //add code to execute the "special" functionality of each class
        if (i == 0)
        {
            cout << "RaceCar can go from 0 to 60 mph in " << Garage[i].get_amount_of_seconds_from_zero_to_sixty() << " seconds. " << endl;
        }else if (i == 1)
        {
            cout << "The Sedan can comfortably fit " << Garage[i].get_number_of_seats() << " in it. " << endl;
        }else {
            cout << "The pickup can haul " << Garage[i].get_hauling_capacity() << " pounds for your heavier items! " << endl;
        }
    }


    return 0;
} 

}