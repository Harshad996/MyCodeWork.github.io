#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"nenter 3 numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"Greater amoungs the no. is "<<a;
    }
    else if(b>a && b>c){
        cout<<"Greater amoungs the no. is "<<b;
    }
    else{
        cout<<"Greater amoungs the no. is "<<c;
    }
    return 0;
}