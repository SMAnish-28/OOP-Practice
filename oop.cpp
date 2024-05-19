#include<iostream>

using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};  // Abstract class

class Employee:AbstractEmployee {
private:
    // Encapsulation
    // string name;
    string company;
    int age;
protected:
    string name;
public:
    // string name;
    // string company;
    // int age;

    void setName(string Name){ // setter
        name = Name;
    }
    string getName(){ // getter
        return name;
    }
    void setCompany(string Company){ // setter
        company = Company;
    }
    string getCompany(){ // getter
        return company;
    }
    void setAge(int Age){ // setter
        // age = Age;
        if(Age >= 18)
            age = Age;
    }
    int getAge(){ // getter
        return age;
    }
    void IntroduceYourself(){
        cout << "name - " << name << endl;
        cout << "company - " << company << endl;
        cout << "age - " << age << endl;
    }
    // Constructor
    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
    // Abstraction
    void AskForPromotion(){
        if(age > 30) cout << name << " got promoted!" << endl;
        else cout << name << " sorry NO promotion for you!" << endl;
    }
    // Inheritance
    
};

// Inheritance
class Developer:public Employee{
    // Developer class is inheriting Employee class
    // Developer class is a child class of Employee class
    // Employee class is a parent/super/base class of Developer class
public: 
    string FavProgrammingLanguage;
    Developer(string Name, string Company, int Age, string favLang)
        :Employee(Name, Company, Age)
    {
        FavProgrammingLanguage = favLang;
    }

    void FixBug(){
        // cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
        cout << name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher:public Employee {
    // Teacher class is inheriting Employee class
    // Teacher class is a child class of Employee class
    // Employee class is a parent/super/base class of Teacher class
public:
    string Subject;
    // we have to create a constructor for Teacher class
    Teacher(string Name, string Company, int Age, string subject)
        :Employee(Name, Company, Age)
    {
        Subject = subject;
    }
    void prepareLesson(){
        cout << name << " is preparing " << Subject << " lesson." << endl;
    }
};

int main(){

    // Employee employee1 = {"Anish", "JU", 19}; // argument list
    // Employee employee1;
    // employee1.name = "Anish";
    // employee1.company = "JU";
    // employee1.age = 19;
    // employee1.IntroduceYourself();

    // Employee employee2 = {"John", "Amazon", 35};
    // Employee employee2;
    // employee2.name = "John";
    // employee2.company = "Amazon";
    // employee2.age = 35;
    // employee2.IntroduceYourself();

    // employee1.setAge(15);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    Developer d = Developer("Anish", "JU", 19, "C++");
    // d.FixBug();
    // d.FixBug();
    // d.FixBug();
    // d.AskForPromotion();

    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.prepareLesson();
    t.AskForPromotion();
}
