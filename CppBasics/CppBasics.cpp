// CppBasics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

void addExtraLines() {
    cout << endl;
    cout << "*****************************" << endl;
    cout << endl;
}
void pointerOperations() {

    addExtraLines();
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

    addExtraLines();
    // For loop :
    cout << "For loop" << endl;

    int someValue[3] = { 23, 26, 28 };

    for (int value : someValue) {
        cout << value << endl;
    }
}

// Advanced data types :
void advancedDataTypes() {
    addExtraLines();
    Student* student = new Student(1, "radhey", 8.35, "9987654321");
    student->PrintStudentDetails();
}

void fileOperations() {
    
    addExtraLines();
    // File operations :
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
    addExtraLines();
    MarutiSwift * swift = new MarutiSwift("Suzuki", "Swift", "VDI");
    swift->PrintCarDetails();
    HyundaiCreta * creta = new HyundaiCreta("Hyundai", "Creta", "SX");

    Car * cars[] = {swift, creta};

    //cars[0]->ChangeAcceleratorPosition(0.05f);

    for (Car *car : cars) {
        car->ChangeAcceleratorPosition(0.05f);
    }
}

void playWithTemplates() {
    addExtraLines();
    Templates * tTemplate = new Templates();
    tTemplate->StartTesting();

}

void playWithMemoryManagement() {
    addExtraLines();
    MemoryManagement memoryManagement = MemoryManagement("A");

    MemoryManagement * memoryManagement1 = new MemoryManagement("B");
    delete memoryManagement1;

    shared_ptr<MemoryManagement> memoryManagement2;

    if (true) {
        shared_ptr<MemoryManagement> memoryManagement3 = make_shared<MemoryManagement>("C");
        memoryManagement2 = memoryManagement3;
    }
    cout << "Name : " << memoryManagement2->GetName() << endl;


}

void playWithCompilationAndLinking() {
    CompilationLinking * compilationLinking = new CompilationLinking();
    compilationLinking->TestFunction();

    delete compilationLinking;
}

void playWithAdvancedTopics() {
    AdvancedTopics * advancedTopics = new AdvancedTopics();
    advancedTopics->LambdaExpressions();

    delete advancedTopics;
}

void playWithHatchSuvCar() {
    HatchSuv * hatchSuv = new HatchSuv("Radhey", "ThetaX", "T2");

    delete hatchSuv;
}

void playWithOperatorOverloading() {
    AdvancedTopics operatorOverloading = AdvancedTopics(26);
    ++operatorOverloading;

    AdvancedTopics at1(12);
    AdvancedTopics at2(15);

    AdvancedTopics * at3 = at1 + at2;

    cout << "Number at3 is : " << at3->getNumber() << endl;

    Complex complex1(1,1);// = new Complex(15, 6);
    Complex complex2(1,2);// = new Complex(10, 60);

    Complex * complex3 = complex1 + complex2;

    complex3->printNumber();


    //delete operatorOverloading;
}

void playWithExceptionHandling() {
    ExceptionHandling * exceptionHandling = new ExceptionHandling();
    //exceptionHandling->SimpleTryCatchThrowExample();
    
    //exceptionHandling->UncaughtException();
    //exceptionHandling->CatchingExceptionInInheritance();

    //exceptionHandling->CustomExceptionExample();
    exceptionHandling->NestedException();
}

int main()
{
    cout << "Hello Dear!" << endl;

    //pointerOperations();

    //loopFunctionality();
    
    //fileOperations();

    // playWithCar();

    //playWithTemplates();

    //playWithMemoryManagement();

    // playWithCompilationAndLinking();

    //playWithAdvancedTopics();

    // playWithHatchSuvCar();

    //playWithOperatorOverloading();

    playWithExceptionHandling();

    char temp;
    cin >> temp;
    getchar();
    return 0;
}

