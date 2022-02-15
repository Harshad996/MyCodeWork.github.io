#include <iostream>

using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex);
    int sumComcomplex(complex, complex);
};

class complex
{
    int a;
    int b;
    //friend int calculator ::sumRealcomplex(complex, complex);
   // friend int calculator ::sumComcomplex(complex, complex);

   //aliter: Declaring the entire calculator class as friend

   friend class calculator; 

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return ((o1.a + o2.a));
}

int calculator ::sumComcomplex(complex o1, complex o2)
{
    return ((o1.b + o2.b));
}

int main()
{

    complex c1, c2;
    c1.setNumber(5, 4);
    c1.printNumber();

    c2.setNumber(2, 8);
    c2.printNumber();

    calculator cal;
    int res = cal.sumRealcomplex(c1, c2);
    cout << "The sum of real part c1 and c2 is " << res << endl;

    int resc = cal.sumComcomplex(c1, c2);
    cout << "The sum of complex part c1 and c2 is " << resc << endl;

    return 0;
}