#include<iostream>

using namespace std;

/*
template<class T1,class T2>
class nameofclass{

};
*/

template<class T1,class T2>
class myclass{
    public:
      T1 data1;
      T2 data2;
    myclass(T1 a, T2 b){
          data1 = a;
          data2 = b;
      }
    void diaplay(){
        cout<<this->data1<<" "<<this->data2;
    }  

};

int main(){
    myclass<int, float> obj(1,1.223);
    obj.diaplay();
    return 0;
}