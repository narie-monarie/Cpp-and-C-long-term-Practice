#include <iostream>
#include <ostream>
#include <string>
using std::string;
//Encapsulation - Bundling data and methods that operate on that data by using access modifiers.
//Abstraction - Hiding the complex implementation for an easier interface
//polymorphism - same methods different implementation
//inheritance = Base class and child class
class AbstractEmployee {
    virtual void askForPromotion() = 0;
};
class Employee : AbstractEmployee {
//private by default
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    //getters and setters
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age>=18) Age = age;
    }
    int getAge() {
        return Age;
    }
    //constructor a special method that is invoked ech time an object of a class is created
    //Default constructor - Automaticaly generated by my compiler
    //constructor has same name as the class
    //Constructor doesnt have a return type
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }

    //describing a behaviour
    void IntroduceYourself() {
        std::cout << "Name " << Name << std::endl;
        std::cout << "Company " << Company << std::endl;
        std::cout << "Age " << Age << std::endl;
    }
    void askForPromotion() {
        if (Age > 30)
            std::cout << Name << " got Promoted" << std::endl;
        else
            std::cout << Name << " sorry no promotion for you"<<std::endl;
    }
    virtual void work(){
	std::cout << Name << " is checking email, task backlog and performing tasks..." << std::endl;
    }
};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name,string company, int age, string favProgrammingLanguage):Employee(name,company,age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug() {
        std::cout << Name << " fixed a bug using " << FavProgrammingLanguage << std::endl;
    }
    void work(){
	std::cout << Name << " is writing " <<  FavProgrammingLanguage<< " code" << std::endl;
    }

};

class Teacher : public Employee {
public:
    string Subject;

    void prepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson"<<std::endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age){
	Subject = subject;
  }
    void work(){
	std::cout << Name << " is Teaching " <<  Subject <<std::endl;
    }

};
int main() {
    Employee employee1 = Employee("Saldina","Youtube",25); //object of the class
    //employee1.Name = "Monari";
    //employee1.Company = "Youtube";
    //employee1.Age = 26;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Monari", "Amazon", 31);
    //employee2.Name = "John";
    //employee2.Age = 22;
    //employee2.Company = "amazon";
    employee2.IntroduceYourself();

    employee1.setAge(23);
    std::cout<< employee1.getName()<< " is "<< employee1.getAge() << " years old"<<std::endl;
    //these are abstracted, we cant see the implementation but only the interface
    employee1.askForPromotion();
    employee2.askForPromotion();

    Developer d = Developer("Job", "Youtube", 25, "Golang");
    d.fixBug();
    d.askForPromotion();
   // d.work();
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.prepareLesson();
    t.askForPromotion();
   // t.work();


    Employee *e1 = &d; //creating a base class pointer to a derived class object
    Employee *e2 = &t;


    e1 -> work();
    e2 -> work();
}
