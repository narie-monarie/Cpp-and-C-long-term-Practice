#include <iostream>
#include <string>
using namespace std;

class Chef {
public:
    string name;
    int age;

    Chef(string name, int age) {
        this -> name = name;
        this -> age = age;
    }
    void makeChicken() {
        cout << "The Chef makes chicken" << endl;
    }

    void makeSalad() {
        cout << "The Chef Makes salad" <<endl;
    }

    void makeSpecialdish() {
        cout << "The chef makes a special dish" << endl;
    }
};

class ItalianChef : public Chef {
public:
    string countryOfOrigin;

    ItalianChef(string name, int age, string countryOfOrigin) : Chef(name,age) {
        this -> countryOfOrigin = countryOfOrigin;
    }
    void makePasta() {
        cout << "The Chef makes Pasta" << endl;
    }

    //override
    void makeSpecialdish() {
        cout << "The chef makes chicken parm" << endl;
    }
};
int main() {
    Chef myChef("Gordon Matanko", 50);
    myChef.makeChicken();

    ItalianChef myItalianChef("Onyango Owiti", 55, "Italy");
    myItalianChef.makeChicken();
    cout << myItalianChef.age << endl;
    return 0;
}
