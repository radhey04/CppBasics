#pragma once
#include "Car.h"
class SUV :
    public Car
{
public:
    SUV();

    SUV(string manufacturer, string name, string model);

    ~SUV();
};

