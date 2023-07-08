#include <iostream>
#include "Simulation.h"

int main()
{

    Simulation mySimul(1, 2, (float)3.0, 3.1415);

    mySimul.runTest();

    mySimul;
    std::cout << "Hello World!\n";

    return 0;
}