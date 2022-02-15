#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printNumber()
    {
        cout << "The Complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
    cout << "Hello world" << endl;
}

int main()
{
    Complex a(3, 4);
    a.printNumber();

    Complex b = Complex(9, 8);
    b.printNumber();
    return 0;
}