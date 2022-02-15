#include<iostream>

using namespace std;

class Test{
    int a;
    int b;

      public:
          Test(int i, int j) : a(i), b(j){
              cout<<"Constructor executed"<<endl;
              cout<<"value of A and B is "<<a<<" and "<<b<<"."<<endl;
          }
};
int main(){
    Test num(6,7);
    return 0;
}