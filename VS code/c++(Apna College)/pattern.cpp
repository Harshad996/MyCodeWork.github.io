#include<iostream>

using namespace std;

int main(){
    int count=1;
    for(int i=0;i<6;i++){
        for(int j=0;j<i ;j++){
           if(j % 2 != 0){
               cout<<count*2<<" ";
               count++;
           }
           else{
               cout<<1<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}