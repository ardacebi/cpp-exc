#include <iostream>

using namespace std;

// Object Oriented Programming - OPP

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee { 
    public: // private also by default but for the sake of clarity...
        string Company;
        int Age;
    protected:
        string Name;
    public: // ENCAPSULATION: main elements of Name, Company and Age are hidden as private
        void setName(string name) { // setter
            Name = name;
        }
        string getName() { // getter
            return Name;
        }
        void setCompany(string company) {
            Company = company;
        }
        string getCompany() {
            return Company;
        }
        void setAge(int age) {
            if(age>=18)
            Age = age;
        }
        int getAge() {
            return Age;
        }

        void IntroduceYourself() {
            cout << "Name: "<< Name << endl;
            cout << "Company: "<< Company << endl;
            cout << "Age: "<< Age << endl;
        }

        Employee(string name, string company, int age) { // Constructor
            Name = name;
            Company = company;
            Age = age;
        }

        void AskForPromotion() {
            if(Age>30) {
                cout << Name << " got promoted!" << endl;
            } else {
                cout << Name << ", sorry NO promotion for you!" << endl;
            }
        }
        virtual void Work() {
            cout << Name << " is checking email, task backlog, performing tasks..." << endl;
        }
};

/* ACCESS MODIFIERS
We have three access modifiers: public, private and protected.
Private means that anything private in the classes would be hidden.
Public gives auth to anyone outside the class free access.
Protected ...
*/

class Developer:public Employee { // employee is parent class
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age) {
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        void FixBug() {
            cout << Name << " fixed the bug using " << FavProgrammingLanguage << "!" << endl;
        }
        void Work() {
            cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
        }
};

class Teacher:public Employee {
    public:
        string Subject;
        void PrepareLesson() {
            cout << Name << " is preparing for a " << Subject << " lesson" << "." << endl;
        }
        Teacher(string name, string company, int age, string subject): Employee(name, company, age) {
            Subject = subject;
        }
        void Work() {
            cout << Name << " is teaching " << Subject << endl;
        }
};

int main() {
    // The most common use of polymorphism is when a
    // parent class reference is used to refer to a child class object

    /* Employee employee1 = Employee("Arda", "Designble", 20);
    employee1.Name = "Arda";
    employee1.Company = "Designble";
    employee1.Age = 20;

    Employee employee2 = Employee("John", "Designble", 35);
    employee2.Name = "John";
    employee2.Company = "Designble";
     employee2.Age = 35; */

    Developer d = Developer("Arda", "Designble", 20, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "history");

    // t.PrepareLesson();
    // t.AskForPromotion();
    // d.Work();
    // t.Work();

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1 -> Work();
    e2 -> Work();

    return 0;
}