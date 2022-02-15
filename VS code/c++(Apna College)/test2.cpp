#include<iostream>

using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int count=0;
    for(int i=1;i<=x;i++){
        int sum=0;
        for(int j=i+1; j<=x; j++){
            sum = i+j;
            if(sum % z == 0){
            count++;
            }
        }
    }

    cout<<endl;
    cout<<count;
    return 0;
}