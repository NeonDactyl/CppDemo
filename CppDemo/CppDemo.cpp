#include <iostream>
#include "Simulation.h"
#include "SimulationTwo.h"
#include <string>

void print(std::string s)
{
    std::cout << s;
}

int main()
{
    print("Initializing first simulation\n");
    Simulation mySimul(1, 2, (float)3.0, 3.1415);

    print("\n\nInitializing second simulation of different type\n");

    SimulationTwo secondSimulation(3, 2, (float)3.0, 3.1415);


    print("\n\n\nRunning first simulation test\n");
    mySimul.runTest();
    
    print("\n\n\nRunning second simulation test\n");
    secondSimulation.runTest();

    print("\n\n");
    return 0;
}