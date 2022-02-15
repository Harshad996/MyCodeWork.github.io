#include<iostream>

using namespace std;

int main(){
    int num1,num2,lcm;
    bool fact=true;
    cout<<"Enter two number which you would like to find there lcm: "<<endl;
    cin>>num1>>num2;
    lcm = (num1>num2)?num1:num2;

    while(fact){
        if(lcm%num1 == 0 && lcm%num2 == 0){
            cout<<"Lcm of "<<num1<<" and "<<num2<<" is "<<lcm<<endl;
            fact = false;
        }
        else{
            lcm++;
        }
    }
    return 0;
}