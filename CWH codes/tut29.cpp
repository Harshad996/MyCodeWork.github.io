#include<iostream>

using namespace std;

class complex{
    int a,b;

    public:

    complex(void);

    void printdata(){
        cout<<"The complex no. is "<<a<<" + "<<b<<endl;
    }
};

complex:: complex(void){
    a=0;
    b=0;
    cout<<"Hello buddies"<<endl;
}

int main(){
    complex c1,c2,c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}