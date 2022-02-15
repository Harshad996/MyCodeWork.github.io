#include<iostream>

using namespace std;

class A{
    int a;
      public:
        void setdata(int a){
            this->a = a;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setdata(2);
    a.getData();
    return 0;
}