#include<iostream>

using namespace std;

class Complex{
    int real,imaginary;
      public:
          void setdata(int a,int b){
              real =a;
              imaginary =b;
          }
          void getdata(){
              cout<<"The real part is "<<real<<endl;
              cout<<"The imaginary part is "<<imaginary<<endl;
          }
};
int main(){
    //Complex c1;
    // c1.setdata(1,2);
    // c1.getdata();

    Complex *pr = new Complex;

    pr->setdata(1,444);

    pr->getdata();

    Complex *prt = new Complex[4];
    prt->setdata(1,4);
    prt->setdata(9,8);
    prt->getdata();
    return 0;
}