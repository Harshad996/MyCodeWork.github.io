#include<iostream>

using namespace std;

int main(){
    int num1,num2,small,co=1;
    int HCF;
    cout<<"Enter two positive integer"<<endl;
    cin>>num1>>num2;
    small = (num1<num2)?num1:num2;

    while(co <= small){
        if(num1%co == 0 && num2%co == 0){
            HCF = co;
        }
        co++;
    }

    int LCM = (num1*num2)/HCF;
    cout<<"LCM: "<<LCM<<endl;
    cout<<"HCF: "<<HCF<<endl;
    return 0;
}