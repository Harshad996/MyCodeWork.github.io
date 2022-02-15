#include<iostream>

using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number upto which sum would be calculating: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}