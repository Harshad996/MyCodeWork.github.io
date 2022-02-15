#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st="Harry bhai",st2;
   //opening files using constructor and reading it
    ofstream out("sample60.txt");
    out<<st;

    ifstream in("sample60b.txt");
    in>>st2;
    cout<<st2<<endl;
    getline(in,st2);
    cout<<st2;
    return 0;
}