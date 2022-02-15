#include<iostream>

using namespace std;

int Factorial(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum *= i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number whose factorial is to be find: ";
    cin>>n;
    cout<<endl;
    cout<<"Result is: "<<Factorial(n);
    return 0;
}