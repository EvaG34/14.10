#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;
    int yearOfStudy;

public:
    Student()
    {
        name = "No name";
        age = 17;
        yearOfStudy = 1;
    }

    Student(string name, int age, int yearOfStudy)
    {
        this->name = name;
        this->age = age;
        this->yearOfStudy = yearOfStudy;
    }

    void Output() const
    {
        cout << "Name: " << name << "\tAge: " << age << "\tYear of Study: " << yearOfStudy << endl;
    }

    void Input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter year of study: ";
        cin >> yearOfStudy;
    }

    void SetName(string name) { this->name = name; }
    void SetAge(int age) { this->age = age; }
    void SetYearOfStudy(int yearOfStudy) { this->yearOfStudy = yearOfStudy; }

    string GetName() const { return name; }
    int GetAge() const { return age; }
    int GetYearOfStudy() const { return yearOfStudy; }
};
