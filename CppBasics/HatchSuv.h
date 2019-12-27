#pragma once

class HatchSuv :
    public HatchbackCar, public SUV
{
public:
    HatchSuv();
    HatchSuv(string manufacturer, string name, string model);
    
    ~HatchSuv();
};

