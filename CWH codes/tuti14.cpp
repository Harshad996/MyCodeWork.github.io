#include<iostream>

using namespace std;


typedef struct emplyoee
{
    int eId;
    char favchar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    ep harsh;
    harsh.eId=22;
    harsh.favchar='f';
    harsh.salary=1200000000000;
    cout<<harsh.eId<<endl;
    cout<<harsh.favchar<<endl;
    cout<<harsh.salary<<endl; 

    money hr;
    hr.rice=23;
    hr.car='e';
 
    cout<<hr.car<<endl;

    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;;
    cout<<lunch<<endl;
    

    return 0;
}