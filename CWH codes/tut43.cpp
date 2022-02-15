#include<iostream>

using namespace std;

class Base1{
   public:
   void greet(){
      cout<<"How are you?"<<endl;
   }
};

class Base2{
   public:
   void greet(){
       cout<<"Kesa ho aap?"<<endl;
   }
};

class Derived : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1 :: greet();
    }
};

class B{
   public:
     void say() {
         cout<<"Hellow World"<<endl;
     }   
};

class D : public B{
    int a;
    public:
      void say(){
          cout<<"Hellow Beautiful people"<<endl;
      }
};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    B b;
    b.say();

    D d1;
    d1.say();
    return 0;
}