#include "stdafx.h"
#include "MarutiSwift.h"


MarutiSwift::MarutiSwift()
{
    
}

MarutiSwift::MarutiSwift(string manufacturer, string name, string model) : HatchbackCar(manufacturer, name, model)
{

}


MarutiSwift::~MarutiSwift()
{
}

void MarutiSwift::ChangeAcceleratorPosition(float deltaPosition)
{
    this->AcceleratorPosition += deltaPosition;
    this->Speed = 1.25 * this->MaxSpeed * this->AcceleratorPosition / (this->AcceleratorPositionHigh - this->AcceleratorPositionLow);
    cout << "Maruti Swift : acceleration, speed is determined as per concrete class computation." << endl;
}
