#pragma once
#include "HatchbackCar.h"
class MarutiSwift :
    public HatchbackCar
{
public:
    MarutiSwift();
    MarutiSwift(string manufacturer, string name, string model);

    ~MarutiSwift();

    void ChangeAcceleratorPosition(float deltaPosition);
};

