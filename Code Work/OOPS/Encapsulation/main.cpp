#include <iostream>

using namespace std;

class A{
public:
    int a;
    void funA(){
      cout<<"Func A\n";
    }

private:
    int b;
    void funB(){
    cout<<"Func B\n";
    }

protected:
    int c;
    void funcC(){
    cout<<"Func C \n";
    }

};
int main()
{
   A obj;
   obj.funA();
   obj.funB();
}
