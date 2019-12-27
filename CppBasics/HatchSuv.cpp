#include "stdafx.h"
#include "HatchSuv.h"


HatchSuv::HatchSuv()
{
}

HatchSuv::HatchSuv(string manufacturer, string name, string model) : HatchbackCar(manufacturer, name, model), SUV(manufacturer, name, model), Car(manufacturer, name, model)
{
    cout << "HatchSuv parameterised constructor called." << endl;
}


HatchSuv::~HatchSuv()
{
}
