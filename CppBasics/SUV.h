#pragma once
#include "Car.h"
class SUV :
    virtual public Car
{
public:
    SUV();

    SUV(string manufacturer, string name, string model);

    ~SUV();
};

