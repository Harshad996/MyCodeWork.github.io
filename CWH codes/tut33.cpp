#include<iostream>

using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

    public:
      BankDeposit(){}
      BankDeposit(int, int, float); //r can be like 0.04
      BankDeposit(int, int, int); //R can be like 4.
      
      void show(){
          cout<<"You invested "<<principal
          <<", So after "<<years<<" years completion your net amount become "
          <<returnvalue<<endl;
      }
};

BankDeposit :: BankDeposit(int p,int y,float r){

    principal = p;
    years=y;
    interestrate=r;

    returnvalue=principal;

    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue*(1+interestrate);
    }
}

BankDeposit :: BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestrate= float(r)/100;

    returnvalue=principal;

    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue*(1+interestrate);
    }
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    
    return 0;
}