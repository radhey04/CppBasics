#pragma once

#include <string>

using namespace std;

enum EngineStates
{
    Running,
    Shutdown
};

enum CarKeyPositions
{
    On,
    Off,
    Loked
};

class Car
{
protected:
    // OOP concepts : Encapsulation - Car properties (state) like Manufacturer, Model, Speed etc. cannot be altered 
    // from outside the class. There are inputs from outside which can alter some of these hidden states (speed etc.) and
    // some cannot be changed at all.

    string Manufacturer = "";
    string Name = "";
    string Model = "";
    float Speed = 0.0; // kmph
    float AcceleratorPosition = 0.0; // 0.0 to 5.0 range
    EngineStates EngineState = EngineStates::Shutdown;
    CarKeyPositions KeyPosition = CarKeyPositions::Off;
    float AcceleratorPositionLow = 0.0;
    float AcceleratorPositionHigh = 5.0;
    float MaxSpeed = 200.0f;

public:
    Car();
//    Car(float speed = 0.0, float acceleratorPosition = 0.0, EngineStates engineState = EngineStates::Shutdown, CarKeyPositions keyPosition = CarKeyPositions::Off); // Invalid

    // When the car is getting built, then only you can set Manufacturer, Name, Model etc. after that
    // these properties are read-only : 

    Car(string manufacturer, string name, string model, float speed = 0.0, float acceleratorPosition = 0.0, EngineStates engineState = EngineStates::Shutdown, CarKeyPositions keyPosition = CarKeyPositions::Off);

    ~Car();

    string GetManufacturer();
    string GetName();
    string GetModel();
    float GetSpeed();

    float GetAcceleratorPosition();
    virtual void ChangeAcceleratorPosition(float deltaPosition);

    EngineStates GetEngineState();

    CarKeyPositions GetCarKeyPosition();
    void SetCarKeyPosition(CarKeyPositions keyPosition);

    void PrintCarDetails();

};

