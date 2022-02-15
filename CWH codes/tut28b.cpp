#include <iostream>

using namespace std;

class c2;

class c1
{
    int val1;

public:
    void setValue(int value)
    {
        val1 = value;
    }

    void display()
    {
        cout << val1 << endl;
    }

    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val2;

public:
    void setValue(int value)
    {
        val2 = value;
    }

    void display()
    {
        cout << val2 << endl;
    }

    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 a;
    a.setValue(5);

    c2 b;
    b.setValue(8);

    exchange(a,b);
    
    cout<<"The value of c1 after exchanging becomes: ";
    a.display();
    cout<<"The value of c2 after exchanging becomes: ";
    b.display();
    return 0;
}