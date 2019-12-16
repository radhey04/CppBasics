#pragma once
#include "SUV.h"
class HyundaiCreta :
    public SUV
{
public:
    HyundaiCreta();

    HyundaiCreta(string manufacturer, string name, string model);

    ~HyundaiCreta();

    void ChangeAcceleratorPosition(float deltaPosition);
};

