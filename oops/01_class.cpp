#include <bits/stdc++.h>
using namespace std;

class Employee
{
public: // everything inside class is private by default in C++
    string Name;
    string Company;
    int Age;

    // // constructor (type - 1)
    // Employee(string name, int age, string company)
    // {
    //     Name = name;
    //     Age = age;
    //     Company = company;
    // }

    // constructor (type - 2 using this keyword)
    Employee(string name, int age, string company)
    {
        this->Name = name;
        this->Age = age;
        this->Company = company;
    }

    void introduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Age - " << Age << endl;
        cout << "Company - " << Company << endl;
    }
};

int main()
{
    Employee* employee1 = new Employee("shyam", 19, "sokas");
    employee1->introduceYourself();

    Employee* employee2 = new Employee("Ritesg", 17, "koias");
    employee2->introduceYourself();
}