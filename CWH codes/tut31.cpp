#include<iostream>

using namespace std;

class complex{
    int a,b;

    public:

    complex(){
        a=4;
        b=3;
    }

    complex(int x){
        a=x;
        b=3;
    }

    complex(int x, int y){
        a=x;
        b=y;
    }

    void Display(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1(7,6);
    c1.Display();

    complex c2(7);
    c2.Display();

    complex c3;
    c3.Display();


    return 0;
}