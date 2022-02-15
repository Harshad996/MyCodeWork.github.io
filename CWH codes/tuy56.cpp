#include<iostream>

using namespace std;

class Baseclass
{
public:
    int var_base = 1;
    virtual void Display()
    {
        cout << "1 Displaying base class variable var_base " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived = 2;
    void Display()
    {
        cout << "2 Displaying base class variable var_base " << var_base << endl;
        cout << "2 Displaying derived class variable derived_base " << var_derived << endl;
    }
};

int main(){
    Baseclass *base_class_pointer;
    Baseclass obj_baseclass;
    Derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->Display();
    return 0;
}