#include<iostream>

using namespace std;

int DigitSumFunction(int a){
    int sum=0;
    while(a!=0){
        sum = sum + a%10;
        a=a/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    cout<<"The sum of the digits in given number is "<<DigitSumFunction(n)<<endl;
    return 0;
}