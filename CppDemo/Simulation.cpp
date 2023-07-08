#include "Simulation.h"

#include <iostream>;

Simulation::Simulation(int v1, int v2, float v3, double v4)
{
    value1 = v1;
    value2 = v2;
    value3 = v3;
    value4 = v4;
}


void Simulation::runTest()
{
    if (value1 < value2 || value3 > value4)
    {
        std::cout << "Woop\n";
    }
}
