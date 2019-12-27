#include "stdafx.h"
#include "Car.h"


Car::Car()
{
    cout << "Car default constructor called." << endl;
}

//Car::Car(float speed, float acceleratorPosition, EngineStates engineState, CarKeyPositions keyPosition)
//{
//    this->Speed = speed;
//    this->AcceleratorPosition = acceleratorPosition;
//    this->EngineState = engineState;
//    this->KeyPosition = keyPosition;
//}


Car::Car(string manufacturer, string name, string model, float speed, float acceleratorPosition, EngineStates engineState, CarKeyPositions keyPosition)
{
    cout << "Car parameterised constructor called." << endl;
    // First time contstruct parameters : 
    this->Manufacturer = manufacturer;
    this->Name = name;
    this->Model = model;

    // Other parameters :
    this->Speed = speed;
    this->AcceleratorPosition = acceleratorPosition;
    this->EngineState = engineState;
    this->KeyPosition = keyPosition;
}

Car::~Car()
{
}

string Car::GetManufacturer()
{
    return this->Manufacturer;
}

string Car::GetName()
{
    return this->Name;
}

string Car::GetModel()
{
    return this->Model;
}

float Car::GetSpeed()
{
    return this->Speed;
}

float Car::GetAcceleratorPosition()
{
    return this->AcceleratorPosition;
}

void Car::ChangeAcceleratorPosition(float deltaPosition)
{
    this->AcceleratorPosition += deltaPosition;
    this->Speed = this->MaxSpeed * this->AcceleratorPosition / (this->AcceleratorPositionHigh - this->AcceleratorPositionLow);
    cout << "Base car : acceleration, speed is determined as per base class computation." << endl;
}

EngineStates Car::GetEngineState()
{
    return this->EngineState;
}

CarKeyPositions Car::GetCarKeyPosition()
{
    return this->KeyPosition;
}

void Car::SetCarKeyPosition(CarKeyPositions keyPosition)
{
    this->KeyPosition = keyPosition;
}

void Car::PrintCarDetails()
{
    cout << endl;
    cout << "Manufacturer : " << this->Manufacturer << endl;
    cout << "Name : " << this->Name << endl;
    cout << "Model : " << this->Model << endl;

    cout << "Speed : " << this->Speed << endl;
    cout << "Accelerator Position : " << this->AcceleratorPosition << endl;
    cout << "Engine State : " << this->EngineState << endl;
    cout << "Key's Position : " << this->KeyPosition << endl;

}
