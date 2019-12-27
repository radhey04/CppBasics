#include "stdafx.h"
#include "HatchbackCar.h"


HatchbackCar::HatchbackCar()
{
}

HatchbackCar::HatchbackCar(string manufacturer, string name, string model) : Car(manufacturer, name, model)
{
    cout << "HatchbackCar parameterised constructor called." << endl;
}


HatchbackCar::~HatchbackCar()
{
}
