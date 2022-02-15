#include<iostream>
#include<cstring>

using namespace std;

class CHW{
    protected:
       string title;
       float rating;

    public:
      CHW(string s,float r){
          title = s;
          rating = r;
      }
      virtual void display()=0; //do-nothing function --> pure virtual function
};

class CHWVideo : public CHW{
    float videoLength;
    public:
       CHWVideo(string s,float r,float vl) : CHW(s,r){
           videoLength = vl;
       }
       void display(){
           cout<<"This is an amazing video with an title "<<title<<endl;
           cout<<"Rating for this video: "<<rating<<endl;
           cout<<"And length of this video is "<<videoLength<<endl;
       }
};

class CHWText : public CHW{
    int words;
    public:
        CHWText(string s,float r,int w) : CHW(s,r){
           words = w;
       }
       void display(){
           cout<<"This is an amazing text tutorial with an title "<<title<<endl;
           cout<<"Rating for this text tutorial: "<<rating<<endl;
           cout<<"And no. of words in this text tutorial is "<<words<<endl;
       }
};

int main(){
    string T;
    float RA, vlen;
    int W;

    cout<<"Heloo Dosto"<<endl<<endl;

    //for code with harry video
    T = "Django tutorial";
    RA = 4.44;
    vlen = 10.13;
    CHWVideo djvideo(T,RA,vlen);
    
    //for code with harry text
    T = "Django tutorial";
    RA = 3.8;
    W = 125;
    CHWText djtext(T,RA,W);
    
    CHW *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    cout<<endl; 
    tuts[1]->display();
    return 0;
}