#include <iostream>

using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printData1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void printData2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called "<<endl;
        }
        void printData(void)
    {
        cout << "The value of derived1 is " << derived1 << endl
        <<"The value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    Derived harshad(1, 2, 3, 4);
    harshad.printData1();
    harshad.printData2();
    harshad.printData();

    return 0;
}