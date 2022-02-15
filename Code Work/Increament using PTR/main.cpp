#include <iostream>

using namespace std;

void increment(int *c){
    (*c)++;
}

int main()
{
    int a=10;
    int *aptr=&a;
    increment(aptr);
    cout<<a<<endl;
}
