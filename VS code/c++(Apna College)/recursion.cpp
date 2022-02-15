#include<iostream>

using namespace std;

// int sum(int n){
//     if(n==1){
//         return n;
//     }
    
//     return (n + sum(n-1));
// }
// int main(){
//     cout<<sum(10);
//     return 0;
// }

// bool sorted(int arr[], int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray = sorted(arr+1, n-1);
//     return(arr[0]<arr[1] && restArray);
// }

// int main(){
//     int arr[] = {1,2,3,8,5,6,7};
//     cout<<sorted(arr, 6);
// }

void dec(int n){
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void Asc(int n){
    if(n==0){
        cout<<"0"<<" ";
        return;
    }
    Asc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    Asc(n);
}