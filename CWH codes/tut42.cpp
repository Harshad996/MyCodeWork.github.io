#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void set_data(int, int);
    void get_data();
};

void SimpleCalculator ::set_data(int c, int d)
{
    a = c;
    b = d;
}
void SimpleCalculator ::get_data()
{
    cout << "The sum of given two no. using Simple calculator is " << a + b << endl;
    cout << "The substraction of given two no. using Simple calculator is " << a - b << endl;
    cout << "The multiplication of given two no. using Simple calculator is " << a * b << endl;
    cout << "The division of given two no. using Simple calculator is " << (a / b) << endl;
}

class ScientificCalculator
{
protected:
    int a;
    int b;

public:
    void set_data1(int c, int d)
    {
        a = c;
        b = d;
    }
    void get_data1()
    {
        cout << "The power of given two no. using Simple calculator is " << pow(a, b) << endl;
        cout << "The max of given two no. using Simple calculator is " << max(a, b) << endl;
        cout << "The min of given two no. using Simple calculator is " << min(a, b) << endl;
        cout << "The division of given two no. using Simple calculator is " << (a / b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int Choice()
{
    int ch;
    cout<<endl;
    cout<<endl;
    cout << "1. Simple Calulator" << endl;
    cout << "2. Scientific calculator" << endl;
    cout << "3. Quit run" << endl;
    cout << "Please enter your choice" << endl;
    cin >> ch;
    return ch;
}

int main()
{
    int x1, x2;
    HybridCalculator h1;
    int ch=0;
        
        while(ch!=3){
        ch = Choice();
        switch (ch)
        {
        case 1:
            cout << "Enter two numbers on which calculation has to be done" << endl;
            cin >> x1 >> x2;
            h1.set_data(x1, x2);
            h1.get_data();
            break;

        case 2:
            cout << "Enter two numbers on which calculation has to be done" << endl;
            cin >> x1 >> x2;
            h1.set_data1(x1, x2);
            h1.get_data1();
            break;

        case 3:
            cout << "Have a nice day....Good Night" << endl;
            break;

        default:
            cout << "Choose correct option" << endl;
            break;
        }
        }
    return 0;
}