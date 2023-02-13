#include <bits/stdc++.h>
using namespace std;
// binding together data and methods (they are grouped together in class)

class AbstractEmployee
{
    virtual void askForPromotion() = 0; // pure virtual function or abstract function
    //if a class inherits this class it is a mandatory for that class to have implemetation for the virtual function   other wise errors 
  
};

class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Company = company;
    }
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
     void askForPromotion(){
           if(Age > 30){
            cout<<Name << " got promoted!"<<endl;
           }else{
            cout<<Name << " sorry no promotion for you"<<endl;
           }
     }
};

class Developer: Employee{
    public:
      string FavProgrammingLanguage;
      Developer(string name, int age, string company,string language) :Employee(name,age,company) {
         FavProgrammingLanguage = language;
      }

      void fixBug(){
        cout<<getName()<<" fixes bugs using "<<FavProgrammingLanguage;
      }
};

int main()
{
    Developer d =  Developer ("shyam",19,"shyamdev","cpp");
    d.fixBug();
    
    

}