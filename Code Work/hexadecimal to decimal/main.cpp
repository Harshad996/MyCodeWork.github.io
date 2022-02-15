#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int hexadecTodec(string n)
{
    int x=1,ans=0;
    int s=n.size();

    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+= x*(n[i]-'0');
            cout<<n[i]<<endl;
        }
        else if(n[i]>='A' && n[i]<='f')
        {
            ans+= x*(n[i]-'A' + 10);
            cout<<n[i]<<endl;
        }
        x*=16;
    }
    return ans;
}

int main()
{
    string n;
    cin>>n;
    cout<<hexadecTodec(n)<<endl;
}
