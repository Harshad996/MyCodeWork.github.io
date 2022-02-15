#include<iostream>

using namespace std;

template <class T>
class Harshad{
    public:
      T data;
      Harshad(T a){
          data = a;
      }
      void display();
};

template <class T>
void Harshad<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am template func() "<<a<<endl;
}
int main(){
    Harshad<float> h(5.7);
    cout<<h.data<<endl;
    h.display();
    func(5);
    func(4.54);
    return 0;
} 