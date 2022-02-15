#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   //string s1="fam";
   //string s2="ily";

   //s1.append(s2);
   //cout<<s1<<endl;
   //cout<<s1[2]<<endl;

   //string  abc="shahsgdtgetd sgdsgdteb dgddy";
   //abc.clear();
   //cout<<abc;

   //string s1="abc";
   //string s2="abc";
   //cout<<s2.compare(s1)<<endl;

   //if(!s1.compare(s2)){
   // cout<<"strings are equal";
   //}

   //string s1="abc";
   //cout<<s1<<endl;

   //s1.clear();

   //if(s1.empty())
    //cout<<"string is empty";

    string s1="nincompoop";

    cout<<s1.size()<<endl;

    cout<<s1.find("poo")<<endl;

    s1.insert(2,"lol");
    cout<<s1<<endl;
    cout<<s1.length()<<endl;

    s1.erase(3,3);
    cout<<s1<<endl;

    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<endl;
    }
    cout<<endl;

    string s2="goodmorning!";
    string s=s2.substr(11,1);
    cout<<s<<endl;

    string s3="786";
    int x=stoi(s3);
    cout<<x+2<<endl;

    int x1=786;
    cout<<to_string(x1)+"2"<<endl;


    string s4="kdjhathbcksaoaoaq";
    sort(s4.begin(),s4.end());
    cout<<s4<<endl;

}
