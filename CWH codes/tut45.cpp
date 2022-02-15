#include<iostream>

using namespace std;

class Student{
   protected:
      int roll_no;
      public:
      void set_number(int a){
          roll_no = a;
      }
      void print_number(void){
          cout<<"The roll number is "<<roll_no<<endl;
      }
};

class Test : public virtual Student{
     protected:
     float maths,physics;
     public:
     void set_marks(float m1, float m2){
         maths = m1;
         physics = m2;
     }

     void print_marks(void){
         cout<<"You result is here: "<<endl
         <<"Maths: "<<maths<<endl
         <<"physics: "<<physics<<endl;
     }

};

class Sport : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public Test, public Sport{
     private:
     float total;
     public:
     void display(){
           total = maths + physics + score;
           print_number();
           print_marks();
           print_score();
           cout<<"Your total score is: "<<total<<endl;
     } 
};

int main(){
    Result Harshad;
    Harshad.set_number(420);
    Harshad.set_marks(67.9,45.9);
    Harshad.set_score(9);
    Harshad.display();
    return 0;
}