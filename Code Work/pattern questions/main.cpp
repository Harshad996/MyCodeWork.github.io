#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout<<"enter row and coloumns"<<endl;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int i=1;i<=col;i++)
        {
         cout<<"* ";
        }
      cout<<endl;
    }
}
