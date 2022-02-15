#include <iostream>

using namespace std;

class student{
  string name;
  public:

  int age;
  bool gender;

  student(){
     cout<<"Default Constructor"<<endl;
  }// default constructor

  student(string s, int a, int g){
      cout<<"parameterized constructor"<<endl;
    name = s;
    age=a;
    gender=g;
  }//parameterised constructor

  student(student &a){
      cout<<"copy constructor"<<endl;
     name=a.name;
    age=a.age;
     gender=a.gender;
  }

  ~student(){
  cout<<"Destructor Called"<<endl;
  }

  void setName(string s){
     name=s;
  }

  void getName(){
     cout<<name<<endl;
  }

  void printInfo(){
     cout<<"Name = "<<name<<endl;
     cout<<"Age = "<<age<<endl;
     cout<<"Gender = "<<gender<<endl;
  }

  bool operator == (student &a){
     if(name==a.name && age==a.age && gender==a.gender){
     return true;
     }
     return false;
}
};

int main()
{
  //student arr[3];
  //for(int i=0;i<3;i++){
   // string p;
  //  cout<<"Name = ";
    //cin>>p;
  //  arr[i].setName(p);
   // cout<<"Age = ";
   // cin>>arr[i].age;
   // cout<<"Gender = ";
  // cin>>arr[i].gender;
//  }

 // for(int i=0;i<3;i++){
      //  cout<<endl;
    //arr[i].printInfo();
 // }


 student a("Harshad",20,1);
 //a.getName();
 //a.printInfo();
 student b("rahul",21,0);
 student c=a;

 if(b==a){
    cout<<"same"<<endl;
 }
 else{
    cout<<"not same"<<endl;
 }
}
