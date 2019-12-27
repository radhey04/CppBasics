#include "stdafx.h"
#include "SUV.h"


SUV::SUV()
{
}

SUV::SUV(string manufacturer, string name, string model) : Car(manufacturer, name, model)
{
    cout << "SUV parameterised constructor called." << endl;
}


SUV::~SUV()
{
}
