#pragma once

#include <string>

using namespace std;

class Student
{
private:
    int ID;
    string Name;
    double Grade;
    string Phone;

public:
    Student();
    Student(int id, string name, double grade, string phone);
    ~Student();
    
    // ID : 
    bool setId(int id);
    int getId();

    // Name : 
    bool setName(string name);
    string getName();

    // Grade : 
    bool setGrade(double grade);
    double getGrade();

    // Phone : 
    bool setPhone(string phone);
    string getPhone();

    // print details of the student :
    void PrintStudentDetails();


};

