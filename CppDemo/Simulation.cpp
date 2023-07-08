#include "Simulation.h"

#include <iostream>;

void Simulation::reusableFunctionOne()
{
    std::cout << "Hoopla\n";
}

void Simulation::reusableFunctionTwo()
{
    std::cout << "Ooga Booga\n";
}

Simulation::Simulation(int v1, int v2, float v3, double v4)
{
    value1 = v1;
    value2 = v2;
    value3 = v3;
    value4 = v4;

    std::cout << "Simulation Created\n";
}


void Simulation::runTest()
{
    reusableFunctionOne();
    if (value1 < value2 || value3 > value4)
    {
        std::cout << "Woop\n";
    }
    reusableFunctionOne();
    reusableFunctionTwo();
}
