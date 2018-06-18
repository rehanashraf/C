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

void simulate(int, int &, int &);

Door hideCar();

Door openDoor(Door firstchoice, Door hiddencar);

Door makeFirstChoice();

Door makeSecondChoice(Door firstchoice, Door openeddoor );

int main()
{
    int win1 = 0, win2 = 0;
    srand((unsigned)time(0));

    // Run the simulations.
    for (int i = 1; i <= SIMULATION_COUNT; i++)
    {
           	simulate(i, win1, win2);
        cout << i << endl;
    }
    cout << "Win one is " << win1 << endl << "Win two is " << win2 << endl;

}

Door hideCar()
{
    return rand() % 3 + 1 ;
}

Door makeFirstChoice()
{
    return rand() % 3 + 1;
}

Door makeSecondChoice(Door firstchoice, Door openeddoor )
{
    Door thirddoor = 6 - firstchoice - openeddoor;
//    int newchoice = rand() % 2;
//    if (newchoice)
//        return firstchoice;
//    else
//        return thirddoor;
    return thirddoor;
}

Door openDoor(Door firstchoice, Door hiddencar)
{

    if( firstchoice != hiddencar)
        return 6 -firstchoice - hiddencar;
    else
    {
        Door DoortoOpen = rand() % 2 + 1;
        int holdingarray[2] = {0} ;
        for(int i = 0, j = 0; j < 2 ; i++)
        {
            if ( i != firstchoice )
            {
                holdingarray[j] = i;
                j++;
            }

        }
        return holdingarray[DoortoOpen];
    }

}

void simulate(int i, int &win1, int &win2 )
{
    Door firstChoice, winningDoor, secondChoice, openedDoor;
    winningDoor = hideCar();
    firstChoice = makeFirstChoice();
    openedDoor = openDoor(firstChoice,winningDoor);
    secondChoice = makeSecondChoice(firstChoice, openedDoor);
    if (winningDoor == firstChoice)
        win1++;
    else if (winningDoor == secondChoice)
        win2++;
    return;
}
