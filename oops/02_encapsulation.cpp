#include <bits/stdc++.h>
using namespace std;
// binding together data and methods (they are grouped together in class)
class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
   
    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }

    void setCompany(string company)
    {
        Name = company;
    }
    string getCompany()
    {
        return Company;
    }

    void introduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Age - " << Age << endl;
        cout << "Company - " << Company << endl;
    }
    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Company = company;
    }
};

int main()
{
    Employee employee1 = Employee("shyam", 19, "sokas");
    employee1.introduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
}