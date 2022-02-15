#include<iostream>

using namespace std;

int main(){
    int marks[]={23,33,43,56};

    int mathmarks[4];
    mathmarks[0]=12;
    mathmarks[1]=22;
    mathmarks[2]=42;
    mathmarks[3]=73;

    for(int i=0;i<4;i++){
        cout<<"The value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl;
    }

    int i=0;
    while(i<4){
        cout<<mathmarks[i]<<endl;
        i++;
    }
    cout<<endl;

    int j=0;
    do{
        cout<<mathmarks[j]<<endl;
        j++;
    }while(j<4);

    int* p=marks;
    
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}