#include "stdafx.h"
#include "MemoryManagement.h"


MemoryManagement::MemoryManagement()
{
    cout << "MemoryManagement class created" << this->Name << endl;
}

MemoryManagement::MemoryManagement(string name) {
    this->Name = name;
    cout << "MemoryManagement class created : " << this->Name << endl;
}

string MemoryManagement::GetName() const {
    return this->Name;
}

MemoryManagement::~MemoryManagement()
{
    cout << "MemoryManagement class destructed : " << this->Name << endl;
}
