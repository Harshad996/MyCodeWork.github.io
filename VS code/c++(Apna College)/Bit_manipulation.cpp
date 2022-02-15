#include <iostream>

using namespace std;

int GetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearbit(int n, int pos)
{
    int s = ~(1 << pos);
    return (n & s);
}

int updatebit(int n, int pos)
{
    return (n | (1 << pos));
}
int main()
{
    // cout<<GetBit(9, 0)<<endl;
    // cout<<setbit(5, 1)<<endl;
    // cout<<clearbit(5, 2)<<endl;
    // cout << updatebit(5, 1) << endl;
    
                                                                         
    return 0;
}