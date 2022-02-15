#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];


    cout<<"Hello World"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   int ans=0;
   for(int i=0;i<n;i++){
    ans+=arr[i];
   }

    cout<<ans<<endl;

}
