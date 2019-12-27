#include "stdafx.h"
#include "Templates.h"


Templates::Templates()
{
}


Templates::~Templates()
{
}

void Templates::StartTesting()
{
    this->TupleExample();
    this->SetExample();
    this->MapExample();
    this->StackExample();
    this->QueueExample();
}

void Templates::TupleExample()
{
    cout << "Templates class testing : " << endl;

    cout << "Pair testing : " << endl;
    pair<int, string> pair1(45, "Radhey");
    cout << "Pair data is : " << pair1.first << " & " << pair1.second << endl;

    // tuple - storing multiple values for different data types, unline arrays.
    cout << "Tuple testing : " << endl;
    tuple<int, string, string, double> student(45, "Radhey", "1st year", 6.57);

    cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << " " << get<3>(student) << endl;

    cout << "Writing a custom template : Triplet" << endl;

    Triplet<int, string, int> student1(23, "Radhey", 12);

    cout << student1.first << " " << student1.second << " " << student1.third << " " << endl;
}

void Templates::SetExample()
{
    cout << "Set : stores values in a sorted order" << endl;
    cout << "Following is an example of Set" << endl;
    set<int> students = { 1, 3, 6 };

    for (auto iterator = students.begin(); iterator != students.end(); iterator++) {
        cout << *iterator << endl;
    }
    cout << endl;

    // Figure out unique chars in a string : 
    string sampleString = "Find out all the unique character in the String.65";

    set<char> uChars;

    for (int ind = 0; ind < sampleString.length(); ind++) {
        if (isalpha(sampleString[ind])) {
            uChars.insert(tolower(sampleString[ind]));
        }
    }

    for (auto iterator = uChars.begin(); iterator != uChars.end(); iterator++) {
        cout << *iterator << " ";
    }
    cout << endl;
}

void Templates::MapExample()
{
    cout << "Map : Store key value pairs, of the types as defined by user." << endl;
    map<char, int> letterCount;

    string sampleString = "unhygbvftrdcxsewazplmkoijnuhbgytfvrdcxsewaz";
    for (int ind = 0; ind < sampleString.length(); ind++) {
        if (isalpha(sampleString[ind])) {
            letterCount[tolower(sampleString[ind])] += 1;
        }
    }

    for (auto iterator = letterCount.begin(); iterator != letterCount.end(); iterator++) {
        cout << iterator->first << " : " << iterator->second << endl;
    }
    cout << endl;
}

void Templates::StackExample()
{
    cout << "Stack : Last-in-first-out (LIFO) example" << endl;
    stack<int> stackTemp;
    stackTemp.push(3);
    stackTemp.push(5);
    stackTemp.push(9);
    stackTemp.push(10);

    while (!stackTemp.empty()) {
        cout << stackTemp.top() << " ";
        stackTemp.pop();
    }

    cout << endl;
}

void Templates::QueueExample()
{
    cout << "Queue : First-in-first-out (FIFO) example" << endl;
    queue<int> queueExample;
    queueExample.push(3);
    queueExample.push(5);
    queueExample.push(9);
    queueExample.push(10);

    while (!queueExample.empty()) {
        cout << queueExample.front() << " ";
        queueExample.pop();
    }

    cout << endl;
}

void Templates::VectorExample()
{
    // NA
}
