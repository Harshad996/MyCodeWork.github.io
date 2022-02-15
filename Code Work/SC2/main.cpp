#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s="498347231";

    sort(s.begin(),s.end(),greater<int>());

    cout<<s<<endl;
}
