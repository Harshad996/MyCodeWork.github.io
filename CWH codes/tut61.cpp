#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string name;

    //connecting our file with out stream
    ofstream out("sample60.txt");

    //Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name please: ";
    getline(cin,name);

    ////writing a string to the file
    out<<"My name is "+ name;
    out.close();
    
    ifstream in("sample60.txt");
    string content;
    getline(in,content);
    cout<<"The content in sample60 is: "<<endl;
    cout<<content;
    return 0;
}