// I AFFIRM THAT ALL CODE GIVEN BELOW WAS WRITTEN SOLELY BY ME, NATE IDICA, AND THAT
// ANY HELP I RECEIVED ADHERED TO THE RULES STATED FOR THIS EXAM.

#include "Pickup.h"
#include "Racecar.h"
#include "Sedan.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;

TEST(IsSedanTest, NotASedan) //Unit test to see if a car is a Sedan depending on seat capacity
{
    ASSERT_FALSE(isSedan(7)); //Test will pass since car has 7 seats, which makes it not a Sedan.
}

TEST(isSedanTest, IsASedan) //Second unit test to see if car is a Sedan
{
    ASSERT_TRUE(isSedan(6)); 
}

TEST(isRaceCarTest, isRaceCar)
{
    ASSERT_TRUE(isRaceCar(7000)); //Test will pass since car uses more than 7000 gallons of gas at a time making it a Racecar.
}

TEST(isRaceCarTest, isRaceCar)
{
    ASSERT_FALSE(isRaceCar(30));
}

TEST(isPickupTest, Truck) //Unit test for Truck in Pickup Test
{
    ASSERT_FALSE(isPickup(18000)); //Test will pass since Truck is 18000 which is outside of the weight range for pickups
}

TEST(isPickupTest, Pickup)
{
    ASSERT_TRUE(isPickup(8000)); 
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}