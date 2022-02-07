#include <iostream>

using namespace std;

int main()
{
	/*
		Determine the magnitude and location of the combined centre of mass.

		Item	Mass	Horiz. dist. from x		Vert. dist. from ground
		----	----	-------------------		-----------------------
		Engine	120		2100					245
		Driver	75		1080					355
	*/

	// Declaration statements
	
	double	engineMass = 120;		// engine mass [kg]
	double	engineHorDist = 2100;	// engine horizontal distance from X [mm]
	double	engineVerDist = 245;	// engine vertical distance from ground [mm]
	double	driverMass = 75;		// driver mass [kg]
	double	driverHorDist = 1080;	// driver horizontal distance from X [mm]
	double	driverVerDist = 355;	// driver vertical distance from ground [mm]
	double	combinedMass;			
	double	combinedMassHorDist;
	double	combinedMassVerDist;

	// Calculations
	
	combinedMass = engineMass + driverMass;

	combinedMassHorDist = ((engineMass * engineHorDist) + (driverMass * driverHorDist)) / combinedMass;

	combinedMassVerDist = ((engineMass * engineVerDist) + (driverMass * driverVerDist)) / combinedMass;

	// Answer:

	cout << "--------------------------------------------------\n";
	cout << "--------------------------------------------------\n";
	cout << "Race Car Design by Derek Seward - Example 1.1\n";
	cout << "--------------------------------------------------\n";
	cout << "--------------------------------------------------\n";
	cout << "Engine mass: "								<< engineMass << " kg" << endl;
	cout << "Engine horizontal distance from X: "		<< engineHorDist << " mm" << endl;
	cout << "Engine vertical distance from ground: "	<< engineVerDist << " mm" << endl;
	cout << "Driver mass: "								<< driverMass << " kg" << endl;
	cout << "Driver horizontal distance from X: "		<< driverHorDist << " mm" << endl;
	cout << "Driver vertical distance from ground: "	<< driverVerDist << " mm" << endl;
	cout << "--------------------------------------------------\n";
	cout << "ANSWER:\n";
	cout << "--------------------------------------------------\n";
	cout << "Combined mass of " << combinedMass << " kg acting " << combinedMassHorDist << " mm horizontally\n";
	cout << "from X and at a height of " << combinedMassVerDist << " mm above ground.\n";

	return 0;
}