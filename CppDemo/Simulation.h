#pragma once
class Simulation
{
private:
    int value1;
    float value3;
    double value4;
    void reusableFunctionOne();
protected:
    int value2;
    virtual void reusableFunctionTwo();
public:
    Simulation(int v1, int v2, float v3, double v4);
    void runTest();
};

