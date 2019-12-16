#include "stdafx.h"
#include "HyundaiCreta.h"


HyundaiCreta::HyundaiCreta()
{
}

HyundaiCreta::HyundaiCreta(string manufacturer, string name, string model) : SUV(manufacturer, name, model)
{
}


HyundaiCreta::~HyundaiCreta()
{
}

void HyundaiCreta::ChangeAcceleratorPosition(float deltaPosition)
{
    this->AcceleratorPosition += deltaPosition;
    this->Speed = 1.35 * this->MaxSpeed * this->AcceleratorPosition / (this->AcceleratorPositionHigh - this->AcceleratorPositionLow);
    cout << "Hyundai Creta : Acceleration, speed is determined as per concrete class computation." << endl;
}
