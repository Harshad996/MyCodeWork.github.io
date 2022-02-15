#include<iostream>

using namespace std;

class employee{
    public:
    int id;
    float salary;

    employee(int inpId){
        id=inpId; 
        salary=34.0;
    }

    employee(){}
};

class programmer : public employee{
    public:
    int languageCode;
    programmer(int inpid){
        id=inpid;
        languageCode=9;
    }

    void getdata(){
        cout<<id<<endl;
    }
};

int main(){
    employee harry(1),harshad(2);
    cout<<harry.salary<<endl;
    cout<<harshad.salary<<endl;
    programmer skillF(6);
    cout<< skillF.languageCode<<endl;
    cout<< skillF.id<<endl;
    skillF.getdata();

    return 0;
}