#include<iostream>

using namespace std;

class point{
    int x,y,z;

    public:
     
     point(int a, int b=1, int c=2){
         x=a;
         y=b;
         z=c;
     }

     void Display()
    {
        cout << "The x-coordinate is " << x << " and y coordinate is " << y <<" and z-coordinate is "<<z<<endl;
    }
};
int main(){
    
   point p1(9);
   point p2(9,7);
   point p3(9,8,7);
   p1.Display();
   p2.Display();
   p3.Display();

    return 0;
}