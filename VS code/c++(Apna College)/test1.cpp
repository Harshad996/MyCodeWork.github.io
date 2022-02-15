#include<iostream>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    while(y--){
    int p,q,r;
       cin>>p>>q>>r;
        for(int i=(p-1);i<=(q-1);i++){
            arr[i] = (arr[i] & r);
        }
    }

    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}