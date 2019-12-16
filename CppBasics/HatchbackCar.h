#pragma once
#include "Car.h"

class HatchbackCar :
    public Car
{
public:
    HatchbackCar();
    HatchbackCar(string manufacturer, string name, string model);

    ~HatchbackCar();
};

