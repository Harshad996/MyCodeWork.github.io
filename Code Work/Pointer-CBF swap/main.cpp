#include <iostream>

using namespace std;

void swap(int *a,int *b){
    cout<<*a<<" "<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}

int main()
{
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
}
