#include<iostream>

using namespace std;

class SimpleCalculator{
      protected:
      int a;
      int b;
      public:
      void set_data(int c,int d){
          a=c;
          b=d;
      }
      void get_data(){
          cout<<"The sum of given two no. using Simple calculator is "<<a+b<<endl;
          cout<<"The substraction of given two no. using Simple calculator is "<<a-b<<endl;
          cout<<"The multiplication of given two no. using Simple calculator is "<<a*b<<endl;
          cout<<"The division of given two no. using Simple calculator is "<<a/b<<endl;
      }
};

class ScientificCalculator{

};

class HybridCalculator : public SimpleCalculator,public ScientificCalculator{

};

int main(){
    cout<<"Enter two numbers on which calculation has to be done"<<endl;
    int x1,x2;
    cin>>x1>>x2;
    SimpleCalculator h1;
    h1.set_data(x1,x2);
    h1.get_data();
    return 0;
}