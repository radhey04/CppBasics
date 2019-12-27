#include "stdafx.h"
#include "CompilationLinking.h"

CompilationLinking::CompilationLinking()
{
}

CompilationLinking::~CompilationLinking()
{
}

void CompilationLinking::TestFunction()
{
    MyNewInt a = 12, b = 15;

    cout << "addTwo from preprossor directive called. a, b = a+b :: " << a << ", " << b << " = " << addTwo(12, 15) << endl;
}
