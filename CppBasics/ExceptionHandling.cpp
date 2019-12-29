#include "stdafx.h"
#include "ExceptionHandling.h"


ExceptionHandling::ExceptionHandling()
{
    cout << endl;
    cout << endl;
    cout << "********* Exception Hanlding Examples ***********" << endl;
    cout << endl;
}


ExceptionHandling::~ExceptionHandling()
{
}

void ExceptionHandling::SimpleTryCatchThrowExample()
{
    int var = 10;

    cout << "Before try statement" << endl;

    try {
        cout << "Inside try statement " << endl;

        if (var > 0) {
            throw var;
            cout << "After throw (never executed)" << endl;
        } 

        cout << "after if and throw (never executed)" << endl;
    }
    catch (string ex) {
        cout << "Exception string caught : " << ex << endl;
    }
/*    catch (int var) {
        cout << "Exception caught in catch for var : " <<  var << endl;
    } */
    catch (...) { 
        // Default exception catch block : 
        cout << "Default exception caught!" << endl;
    }

    cout << "After catch (will be executed)" << endl;
}

void ExceptionHandling::UncaughtException()
{
    int var = 10;

    cout << "Before try statement" << endl;

    try {
        cout << "Inside try statement " << endl;
        
        throw 10.0;

        cout << "after if and throw (never executed)" << endl;
    }
    catch (int var) {
        cout << "Exception caught in catch for var : " <<  var << endl;
    }

    cout << "After catch (will be executed)" << endl;
}

void ExceptionHandling::CatchingExceptionInInheritance()
{
    SUV * suv = new SUV();

    try {
        cout << "catchingExceptionInInheritance. " << endl;

        throw suv;
    }
    catch (SUV * suv) {
        cout << "SUV exception caught." << endl;
    }
    catch (Car * car) {
        cout << "Car exception caught." << endl;
    }

    cout << "After the catch block." << endl;
}

void ExceptionHandling::CustomExceptionExample()
{
    cout << "Custom exception example." << endl;

    CustomException * customEx = new CustomException();

    try {
        throw customEx;
    }
    catch (exception * ex) {
        cout << "Custom Exception caught : " << ex->what() << endl;
    }
}

void ExceptionHandling::NestedException()
{
    cout << "Nested Exception example." << endl;
    try {
        cout << "First try block." << endl;
        SUV suv;
        try {
            cout << "Second try block." << endl;
            Car car;
            int var1 = 10;
            throw var1;
        }
        catch (int var) {
            cout << "Nested catch : " << var << endl;
            throw (var + 10);
        }
    }
    catch (int var2) {
        cout << "Outer catch : " << var2 << endl;
    }
}

CustomException::CustomException()
{
}

CustomException::~CustomException()
{
}

const char * CustomException::what() const throw()
{
    return "Custom exception thrown!";
}
