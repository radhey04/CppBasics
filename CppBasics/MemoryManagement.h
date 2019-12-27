#pragma once

#include <string>
#include <memory>

using namespace std;

class MemoryManagement
{
private:
    string Name = "Sample";

public:
    MemoryManagement();
    MemoryManagement(string name);

    string GetName() const;

    ~MemoryManagement();
};

