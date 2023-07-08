#pragma once
class Simulation
{
private:
    int value1;
    int value2;
    float value3;
    double value4;
protected:
    void reusableFunctionOne();
    void reusableFunctionTwo();
public:
    Simulation(int v1, int v2, float v3, double v4);
    void runTest();
};

