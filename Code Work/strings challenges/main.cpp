#include <iostream>

using namespace std;

int main()
{
   //string str="ahsgdtehdgjskaidiie";

   cout<<'a'-'A'<<endl;
   //convert uppercase

   for(int i=0;i<str.size();i++){
    if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
   }

    cout<<str<<endl;

}
