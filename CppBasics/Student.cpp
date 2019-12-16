#include "stdafx.h"
#include "Student.h"


Student::Student()
{
}

Student::Student(int id, string name, double grade, string phone) {
    this->setId(id);
    this->setName(name);
    this->setGrade(grade);
    this->setPhone(phone);
}

Student::~Student()
{
}

bool Student::setId(int id)
{
    this->ID = id;
    return true;
}

int Student::getId() {
    return this->ID;
}

bool Student::setName(string name) {
    this->Name = name;

    return true;
}

string Student::getName() {
    return this->Name;
}

bool Student::setGrade(double grade) {
    this->Grade = grade;

    return true;
}

double Student::getGrade() {
    return this->Grade;
}

bool Student::setPhone(string phone) {
    this->Phone = phone;

    return true;
}

string Student::getPhone() {
    return this->Phone;
}

void Student::PrintStudentDetails() {
    cout << endl;
    cout << "Following are the student details : " << endl;
    cout << "Id : " << this->ID << ", name : " << this->Name << ", grade : " << this->Grade << ", Phone : " << this->Phone << endl;
}