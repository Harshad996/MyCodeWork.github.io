#include<iostream>

using namespace std;

void increament(int *a){
    (*a)++;
}
int main(){
    // int a=10;
    // int *aptr= &a;
    // cout<<aptr<<" "<<*aptr<<endl;

    // int arr[]={10,20,30};

    // cout<<arr<<" "<<*arr<<endl;
    // int *ptr= arr;
    // cout<<ptr<<" "<<*ptr<<endl;
    int a=7;
    int *aptr= &a;
    int **bptr = &aptr;

    cout<<aptr<<" "<<**bptr<<endl;
    increament(aptr);
    cout<<a<<endl<<aptr<<endl;    
    return 0;
}