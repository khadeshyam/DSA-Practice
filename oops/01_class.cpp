#include <bits/stdc++.h>
using namespace std;

class Employee
{
public: // everything in C++ class is private by default
    string name;
    string company;
    int age;

    void introduceYourself()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "Company - " << company << endl;
    }
};

int main()
{
    Employee employee1;
    employee1.name = "Shyam";
    employee1.company = "Shyam dev";
    employee1.age = 19;
    employee1.introduceYourself();

    Employee employee2;
    employee2.name = "Ritesh";
    employee2.company = "Ritesh dev";
    employee2.age = 17;
    employee2.introduceYourself();
}