#include<iostream>

using namespace std;

void Printarray(int arr[],int n){
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int n,sum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is: ";
    Printarray(arr,n);
    return 0;
}