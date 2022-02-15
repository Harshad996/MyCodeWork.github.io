#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    void Setvalue(int value)
    {
        data = value;
    }

    friend void add(X, Y);
};

class Y
{
    int num;
     friend void add(X, Y);
public:
    void Setvalue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "The sum of X and Y is " << (o1.data + o2.num) << endl;
}

int main()
{
    X a1;
    a1.Setvalue(6);

    Y b1;
    b1.Setvalue(9);

    add(a1, b1);
    return 0;
}