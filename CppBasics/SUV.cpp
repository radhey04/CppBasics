#include "stdafx.h"
#include "SUV.h"


SUV::SUV()
{
    cout << "SUV created : Default;" << endl;
}

SUV::SUV(string manufacturer, string name, string model) : Car(manufacturer, name, model)
{
    cout << "SUV parameterised constructor called." << endl;
}


SUV::~SUV()
{
    cout << "SUV destructed." << endl;
}
