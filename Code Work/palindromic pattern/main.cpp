#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k<<" ";
            k--;
        }
        for(j=1;j<=i-1;j++)
        {
            ++k;
            cout<<k+1<<" ";
        }
        cout<<endl;
    }
}
