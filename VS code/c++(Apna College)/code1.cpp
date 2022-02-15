#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + x);
    
    bool flag = true;
    for(int i=0;i<(n-1);i++){
        int diff=0;
        diff = (arr[i+1] - arr[i]);
        if((diff==0) || (diff==1)){
            continue;
        }
        else{
            cout<<(arr[i]+1)<<endl;
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"-1"<<endl;
    }


    return 0;
}