// Labwork2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Planet.h"
#include "Spaceship.h"

int main()
{
	cout << "Seden Canpolat" << endl <<
		"20070001044" << endl;

	Planet planetarr[9]{
        Planet("Mercury", 58000000, 4880),
        Planet("Venus", 108000000, 12100),
        Planet("Earth", 150000000, 12800),
        Planet("Mars", 228000000, 6800),
        Planet("Jupiter", 778000000, 142000),
        Planet("Saturn", 1430000000, 120000),
        Planet("Uranus", 2870000000, 51800),
        Planet("Neptune", 4500000000, 49500),
        Planet("Pluto", 5900000000, 2300)
    };

    string spaceshipName;
    double initialFuel;
    cout << "Enter the spaceship's name: " <<  endl;
    cin >> spaceshipName;
    cout << "Enter the spaceship's initial fuel: " << endl;
    cin >> initialFuel;

   
	Spaceship spaceship(spaceshipName, initialFuel);

    
        int i = 1;
        while(i != 0) {
        for (int j = 0; j < 9; j++) {
            cout << "Planets: " << j+1 << ' ' << planetarr[j].getName() <<  ' ' <<
                 "Distance from sun: " << planetarr[j].getDistance() << ' ' <<
                 "Diameter: " << planetarr[j].getDm() << endl;
        }
        cout << "Choose a planet travel to or press 0 to exit" << endl;
        cin >> i;

        spaceship.travel(planetarr[i-1], 0.000001);
        spaceship.displayInfo();
       
    }

	

   
}

