#include <iostream>

using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void Display()
    {
        cout << "The x-coordinate is " << x << " and y coordinate is " << y << endl;
    }
};

int main()
{

    point p1(1, 2);
    p1.Display();

    point p2(7, 9);
    p2.Display();

    return 0;
}