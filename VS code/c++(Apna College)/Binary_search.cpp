#include<iostream>

using namespace std;

int Binary_search(int arr[], int n, int key){
    int s= 0;
    int e = n;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter key value"<<endl;
    int key;
    cin>>key;

    cout<<Binary_search(arr, n, key)<<endl;;


    return 0;
}