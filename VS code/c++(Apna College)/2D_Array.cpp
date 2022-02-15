#include<iostream>

using namespace std;

int main(){
    cout<<"Enter no."<<endl;
    int n,m,x;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    cout<<"Enter value of o: ";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == x){
            cout<<"Element found"<<endl;
            cout<<i<<","<<j<<endl;
            }
        }
        cout<<"\n";
    }
    return 0;
}