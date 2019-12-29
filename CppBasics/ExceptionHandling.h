#pragma once

#include <iostream>
#include "SUV.h"
#include <exception>

using namespace std;

/*
    Try-catch-throw block.
    Ref : https://www.geeksforgeeks.org/exception-handling-c/
*/

class ExceptionHandling
{
public:
    ExceptionHandling();
    ~ExceptionHandling();

    void SimpleTryCatchThrowExample();

    void UncaughtException();

    void CatchingExceptionInInheritance();

    void CustomExceptionExample();

    void NestedException();
};

class CustomException : public exception {

public :
    CustomException();
    ~CustomException();

    virtual const char* what() const throw();

};

