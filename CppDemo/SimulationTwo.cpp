#include "SimulationTwo.h"
#include <iostream>

void SimulationTwo::reusableFunctionTwo()
{
	std::cout << "Booga Ooga\n";
	std::cout << value2 << '\n';
}

SimulationTwo::SimulationTwo(int v1, int v2, float v3, double v4) : Simulation(v1, v2, v3, v4)
{
	std::cout << "derived simulation class\n";
}

