#include<iostream>

using namespace std;

class employee{
    private:
    int a,b,c;

    public:
    int d,e;
    void setdata(int a1, int b1,int c1);
    void getdata(){
        cout<<"The vslue of a is "<<a<<endl;
        cout<<"The vslue of b is "<<b<<endl;
        cout<<"The vslue of c is "<<c<<endl;
        cout<<"The vslue of d is "<<d<<endl;
        cout<<"The vslue of e is "<<e<<endl;
    }
};

void employee :: setdata(int a1, int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    employee harshad;
    //harshad.a=123;
    harshad.d=33;
    harshad.e=44;

    harshad.setdata(1,2,4);
    harshad.getdata(); 
    return 0;
}