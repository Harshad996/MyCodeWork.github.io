#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=2;i<=n;i++){
        arr[i] = 1;
    }

    for(int i=2;i<=n;i++){
        int z = i;

        while((i*z)<=n){
            arr[i*z] = 0;
            z++;
        }
    }

    for(int i=2;i<=n;i++){
        if(arr[i] == 1){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }

    return 0;
}