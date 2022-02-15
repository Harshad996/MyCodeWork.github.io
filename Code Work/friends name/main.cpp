#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Harshad-1\nRam-2\nTiti-3\nPrateek-4"<<endl;
    cout<<"write 25 for exit"<<endl;
    cout<<"choice the no. according to your name"<<endl;
    cin>>n;

    while(n<20)
    {
     switch(n)
    {
    case 1:
        cout<<"harshad is a good boy(nulla)"<<endl;
        break;
    case 2:
        cout<<"ram is chutiya(nulla)"<<endl;
        break;
    case 3:
        cout<<"titi is maha chutiya(nulla)"<<endl;
        break;
    case 4:
        cout<<"prateek's girlfriend name is rashi\nprateek is handsome boy\nmany girls have their crush on him\n(nulla)"<<endl;
        break;
    default:
        cout<<"abay laudu sahi toh choose kr"<<endl;
        break;
    }
    cin>>n;
    }
    return 0;
}
