#include<iostream>

using namespace std;

int main(){
    int n=6;
        for (int i=1;i<=n;i++) {
            for (int j = 1; j <= (n - i); j++) {
                cout<<". ";
            }
            char x = 'A';
            for (int j = 1; j <= i; j++) {
                cout<<(x)<<" ";
                x += 1;
            }
            cout<<endl;
        }
    return 0;
}