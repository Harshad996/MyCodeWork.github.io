#include<iostream>

using namespace std;

int main(){
    int a = 9;
    int* ptr = &a;
    *ptr=5;
    cout<<"The value of a is "<<a<<endl;

    //new operator
    //int *p = new(40);

    float *p = new float(40.66);
    cout<<"The value at address p is "<<*p<<endl;

    int *arr = new int[3];
    arr[0]=45;
    *(arr+1)=65;
    arr[2]=78;
     
    //delete[] arr;
    cout<<"The value of arr[0],arr[1] and arr[2] are "<<arr[0]
    <<" "<<" "<<*(arr+1)<<" "<<arr[2]<<endl;
    return 0;
}