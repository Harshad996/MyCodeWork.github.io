#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // string str;
    // getline(cin, str);
    // cout<<str<<endl;
    // return 0;

    // string s1(5,'n');
    // cout<<s1<<endl;

    // string s1 = "abc";
    // string s2 = "abc";

    // s1.append(s2);
    // cout<<s1<<endl;

    // cout<<s1+s2<<endl;

    // cout<< s1.compare(s2)<<endl;

    // if (!s1.compare(s2))
    //     cout << "strings are equal";

    // s1.clear();

    // if(s1.empty())
    //   cout<<" s1 is empty"<<endl;

    // string s1 = "nincompoop";

    // s1.erase(3, 2);
    // cout<<s1<<endl;

    // cout<< s1.find("poop")<<endl;

    // cout<< s1.length()<<endl;

    // for(int i=0; i<s1.length();i++){
    //     cout<<s1[i]<<endl;
    // }

    // string s = s1.substr(6, 4);

    // cout<< s <<endl;

    //    string s2 = "786";
    //    int x = stoi(s2);

    //    cout<<x+2<<endl;

    // int x = 786;
    // cout<< to_string(x)+"2"<<endl;
    
    string s1 = "hhjdadhakl";
    sort(s1.begin(), s1.end());

    cout << s1 << endl;
    return 0;
}