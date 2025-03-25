// Labwork3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Car.h"
#include "FormulaCar.h"
#include "Motorcycle.h"
#include "RacingVehicle.h"
#include "Track.h"
#include <string>


int main()
{
    cout << "Seden Canpolat" << endl <<
            "20070001044" << endl << endl;

    Car car(0.4, "car", 200, 0.7, "Toyota", "Jin", "Hyunjin");
    car.display();
    cout << endl;

   Motorcycle motor(0.4, "motorcycle", 180, 0.9, "Yamaha", "Chan", "Bangchan");
   motor.display();
   cout << endl;

   FormulaCar formula(0.4, "formula one", 300, 0.95, "Ferrari", "Lix", "Felix");
   formula.display();
   cout << endl;

   Track track(50, 0.2, 0.4, 0.3, 0.1);


   cout << "Race Track: " << endl
       << "Total lenght: " << track.getLength() << endl
       << "Top speed distance: " << track.getLength() * track.getTopSpeed() << endl
       << "High speed distance: " << track.getLength() * track.getHighHandling() << endl
       << "Medium speed distance: " << track.getLength() * track.getMediumHandling() << endl
       << "Cruise speed distance: " << track.getLength() * track.getCruiseSpeed() << endl << endl;


   cout << "Race starts" << endl;

   car.race(track);
   motor.race(track);
   formula.race(track);

   cout << endl;
   cout << "After tunning: " << endl;
   
   car.tunning(20, 0.1);
   motor.tunning(10, 0.05);
   formula.tunning(30, 0.02);

   car.display();
   cout << endl;
   motor.display();
   cout << endl;
   formula.display();
   cout << endl;

   car.race(track);
   motor.race(track);
   formula.race(track);
    

   

}

