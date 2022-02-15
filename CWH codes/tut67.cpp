#include<iostream>

using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float FuncAverage(T1 a,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a = FuncAverage(5, 6.5);
    printf("The average of these numbers is %.3f\n", a);
    int x = 5, y = 10;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}