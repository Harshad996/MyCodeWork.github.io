#include<iostream>

using namespace std;


struct emplyoee
{
    int eId;
    char favchar;
    float salary
};

int main(){
    emplyoee harsh;
    harsh.eId=22;
    harsh.favchar=3;
    harsh.salary=1200000000000;
    cout<<harsh.eId<<endl;
    cout<<harsh.favchar<<endl;
    cout<<harsh.salary<<endl; 

    return 0;
}