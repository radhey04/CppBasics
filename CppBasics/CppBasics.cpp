// CppBasics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include "Student.h"
#include "MarutiSwift.h"
#include "HyundaiCreta.h"

using namespace std;

void pointerOperations() {

    cout << "Pointers to variables" << endl;
    // Pointers to variables 
    int var = 20;
    int *ptr = &var;
    int **ptr2 = &ptr;

    cout << "The value at " << &var << " is " << var << endl;
    cout << "The value at " << ptr2 << " is " << ptr << endl;
    cout << "The address of ptr2 is " << &ptr2 << endl;


    *ptr = 45;

    cout << "The value at " << &var << " is " << var << endl;

    // Pointer for arrays : 
    cout << endl;
    cout << "Pointer for arrays" << endl;
    float grades[100];
    grades[10] = 10.7;

    float *floatPtr = grades;

    int index = 10;
    cout << "Grade of " << index << " is " << *(floatPtr + index) << endl;
}


void loopFunctionality() {

    // For loop :
    cout << endl;
    cout << endl;
    cout << "For loop" << endl;

    int someValue[3] = { 23, 26, 28 };

    for (int value : someValue) {
        cout << value << endl;
    }
}

// Advanced data types :
void advancedDataTypes() {
    Student* student = new Student(1, "radhey", 8.35, "9987654321");
    student->PrintStudentDetails();
}

void fileOperations() {

    // File operations :
    cout << endl;
    cout << endl;
    cout << "File operations" << endl;

    string data;

    ifstream fileContent;
    fileContent.open("Resources/SampleData.txt", ios::in);
    getline(fileContent, data);
    //   fileContent >> data;

    cout << "File data : " << data << endl;

    cout << "Writing to a file " << endl;
    fileContent.close(); // Closing the file.

    ofstream fileData;
    fileData.open("Resources/SampleData.txt", ios::app);
    fileData << " Meri";

    fileData << " Khushi.";

    fileData.close();

    fileContent.open("Resources/SampleData.txt", ios::in);
    getline(fileContent, data);
    //   fileContent >> data;

    cout << "File data : " << data << endl;

    fileContent.close();

    // Advanced data types :
    advancedDataTypes();
}

// Testing inheritance :
void playWithCar() {
    MarutiSwift * swift = new MarutiSwift("Suzuki", "Swift", "VDI");
    swift->PrintCarDetails();

    Car * cars[2];
    cars[0] = swift;

    //cars[0]->ChangeAcceleratorPosition(0.05f);

    HyundaiCreta * creta = new HyundaiCreta("Hyundai", "Creta", "SX");

    cars[1] = creta;
    cout << sizeof(cars) << endl;
    cout << sizeof(Car) << endl;

    for (int carIndex = 0; carIndex < 2; carIndex++) {
        cout << "carIndex : " << carIndex << endl;
        cars[carIndex]->ChangeAcceleratorPosition(0.05f);
    }
}

int main()
{
    cout << "Hello Dear!" << endl;

    //pointerOperations();

    //loopFunctionality();
    
    //fileOperations();

    playWithCar();

    getchar();
    return 0;
}

