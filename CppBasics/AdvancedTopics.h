#pragma once

#include <vector>
#include <iostream>

using namespace std;

class AdvancedTopics
{
    /* Topics : 
    Lambda Functions
    Multiple inheritance - Eg. HatchSuv car 
    Operator overloading
    Exception handling
    */
private:
    int number;
public:
    AdvancedTopics();
    AdvancedTopics(int number);
    ~AdvancedTopics();

    void LambdaExpressions();

    //operatorOverloading
    void operator ++();
    friend AdvancedTopics * operator+ (AdvancedTopics & , AdvancedTopics & );

    int getNumber();

};

class Complex 
{
private:
    int Real;
    int Imaginary;
    

public:
    Complex();
    Complex(int real, int imaginary);
    ~Complex();

    void printNumber();

    //friend Complex * operator + (Complex const &complex1, Complex const & complex2);
    Complex * operator + (Complex const &complex);
};

