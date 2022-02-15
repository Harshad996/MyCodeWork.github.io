#include<iostream>

using namespace std;

class complex{
    int a;
    int b;

    friend complex SumComplex(complex o1, complex o2);

    public:
      void setNumber(int n1, int n2){
          a=n1;
          b=n2;
      }

      void printNumber(){
          cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
      }
};

complex SumComplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    cout<<o3.a<<endl; //covering 6th point.
    return o3;
}

int main(){

    complex c1,c2,sum;

    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(6,7);
    c2.printNumber();

    sum = SumComplex(c1,c2);
    sum.printNumber();
    
    return 0;
}