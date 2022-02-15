#include <iostream>

using namespace std;

class Baseclass
{
public:
    int var_base;
    void Display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived;
    void Display()
    {
        cout << "Displaying base class variable var_base " << var_base << endl;
        cout << "Displaying derived class variable derived_base " << var_derived << endl;
    }
};

int main()
{
    cout << "Hellow World" << endl;
    Baseclass* base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;

    base_class_pointer = & obj_derived; 
    //pointing base class pointer to derived class

    base_class_pointer->var_base = 55;
    //base_class_pointer->var_derived;
    base_class_pointer->Display();

    base_class_pointer->var_base=3455;
    base_class_pointer->Display();

    Derivedclass *derived_class_pointer;
    derived_class_pointer = & obj_derived;
    derived_class_pointer->var_base=9909;
    derived_class_pointer->var_derived=90;
    derived_class_pointer->Display();
    
    return 0;
}