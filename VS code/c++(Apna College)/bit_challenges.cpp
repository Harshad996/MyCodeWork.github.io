#include<iostream>

using namespace std;

void subsets(int arr[], int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

bool ispowerof2(int n){
    return(n && !(n & n-1));
}

int count1s(int n){
    int count =0;
    while(n){
        n = (n & n-1);
        count++;
    }
    return count;
}

int main(){
    // int n;
    // cin>>n;
    // cout<<ispowerof2(n)<<endl;
    // cout<<count1s(n)<<endl;
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    

    return 0;
}