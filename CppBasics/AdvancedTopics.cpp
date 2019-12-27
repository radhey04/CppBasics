#include "stdafx.h"
#include "AdvancedTopics.h"


AdvancedTopics::AdvancedTopics()
{
    this->number = 10;
}

AdvancedTopics::AdvancedTopics(int number)
{
    this->number = number;
}


AdvancedTopics::~AdvancedTopics()
{
}

void AdvancedTopics::LambdaExpressions()
{
    /*
    [ capture clause ] (parameters) -> return-type
    {
    definition of method
    }
    */

    vector<int> exampleVector = { 4, 6, 27, 293, 9, 10 };
    vector<int>::iterator numPointer = find_if(exampleVector.begin(), exampleVector.end(), [](int i) -> bool {
        return i > 10;
    });

    cout << "Output calling the lambda expression is : " << *numPointer << endl;

    cout << "Another lambda function assigned to variable example : " << endl;

    auto addElement = [&]() -> void {
        int tempNumber;
        cin >> tempNumber;
        exampleVector.push_back(tempNumber);
    };

    addElement();

    cout << "Last element in the vector is (vector passed by reference) : " << exampleVector[exampleVector.size() - 1] << endl;

    auto addElementCopy = [=]() mutable -> void  {
        int tempNumber;
        cin >> tempNumber;
        exampleVector.push_back(tempNumber);
    };

    addElementCopy();

    cout << "Last element in the vector is (vector passed by value): " << exampleVector[exampleVector.size() - 1] << endl;

}

void AdvancedTopics::operator++()
{
    // Operator overloading example: 
    // When ++ operator is applied on 'AdvancedTopics' class's object, 
    // then this function body is executed.
    cout << "Number is : " << this->number << endl;
    int tempNum = 10;
    //cout << "Enter a number : ";
    //cin >>  tempNum;

    cout << "Number is increated by " << tempNum << " = " << this->number + tempNum << endl;
}

AdvancedTopics * operator+(AdvancedTopics & at1, AdvancedTopics & at2)
{
    AdvancedTopics * at3 = new AdvancedTopics();
    at3->number = at1.number + at2.number;

    cout << "Summation of the objects is : " << at3->number << endl;

    return at3;
}

int AdvancedTopics::getNumber() {
    return this->number;
}

Complex::Complex() {

}

Complex::Complex(int real, int imaginary) {
    this->Real = real;
    this->Imaginary = imaginary;
}

Complex::~Complex() {

}

void Complex::printNumber() {
    cout << "The number is : " << this->Real << " + " << this->Imaginary << "i" << endl;
}

//Complex * operator + (Complex const & complex1, Complex const & complex2) {
//    Complex * complex3 = new Complex();
//    
//    complex3->Real = complex1.Real + complex2.Real;
//    complex3->Imaginary = complex1.Imaginary + complex2.Imaginary;
//
//    return complex3;
//}

Complex * Complex::operator+(Complex const &complex) {
    Complex *complex1 = new Complex();
    complex1->Real = Real + complex.Real;
    complex1->Imaginary = Imaginary + complex.Imaginary;

    return complex1;
}