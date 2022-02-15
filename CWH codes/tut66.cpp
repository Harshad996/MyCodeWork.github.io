#include<iostream>

using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Harshad{
    public:
       T1 a;
       T2 b;
       T3 c;
    Harshad(T1 x,T2 y,T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    Harshad<> h(4, 5.55, 'r');
    h.display();
    cout<<endl;
    Harshad<float, char, int> g(4.54, 's', 67);
    g.display();
    return 0;
}