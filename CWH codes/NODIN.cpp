#include<iostream>

using namespace std;

int main(){
    int num,count=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    
    while(num!=0){
        num=num/10;
        count++;
    }

    cout<<"number of digits in a given no. is "<<count<<endl;

    return 0;
}