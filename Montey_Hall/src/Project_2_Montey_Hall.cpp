//============================================================================
// Name        : Project2_Montey_Hall.cpp
// Author      : Rehan Ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/***** Complete this program. *****/

using namespace std;
typedef int Door;

const int SIMULATION_COUNT = 100;

void simulate(int, int, int );

Door hideCar();

Door openDoor();

Door makeFirstChoice();

Door makeSecondChoice( );

int main()
{
    int win1 = 0, win2 = 0;

    // Run the simulations.
    for (int i = 1; i <= SIMULATION_COUNT; i++)
    	{
    	simulate(i, win1, win2);
    	}


}


void simulate(int i, int win1, int win2 )
{
	return;
}
