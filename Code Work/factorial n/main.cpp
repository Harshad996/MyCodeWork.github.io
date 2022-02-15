#include <iostream>

using namespace std;

void fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
     factorial*=i;
    }
    cout<<factorial<<endl;
    return;
}

int main()
{
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    fact(n);
    return 0;
}
