#include<iostream>
#include<cmath>

using namespace std;

class point{
    int x,y;

    public:

    void take_point(){
        int a,b;
        cout<<"Enter coordinates- ";
        cin>>a>>b;

        x=a;
        y=b;
    }

    void Display()
    {
        cout << "The x-coordinate is " << x << " and y coordinate is " << y << endl;
    }

    friend void point_distance(point, point);
};
void point_distance(point a,point b){
     float dist;
     dist = sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
     cout<<dist<<endl;
}


int main(){
    
    point p1;
    p1.take_point();

    point p2;
    p2.take_point();

    p1.Display();
    p2.Display();

    point_distance(p1,p2);


    return 0;
}