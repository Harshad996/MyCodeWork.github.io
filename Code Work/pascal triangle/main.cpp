#include <iostream>

using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
  int r;
  cout<<"enter no. of rows"<<endl;
  cin>>r;

  for(int i=0;i<r;i++)
  {
      for(int j=0;j<=i;j++)
      {
          cout<<(fact(i)/(fact(j)*fact(i-j)))<<" ";
      }
      cout<<endl;
  }
  return 0;
}
