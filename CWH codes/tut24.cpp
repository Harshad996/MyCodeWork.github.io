#include <iostream>

using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this employee number " << count<< endl;
        cout<<id;
    }

    static void getcount(void){
        cout<<"The value of count is "<<count<<endl<<endl;
    }
};

int employee ::count;

int main()
{
    employee Harshad, tanya, gappu;

    Harshad.setdata();
    Harshad.getdata();
    employee::getcount();

    tanya.setdata();
    tanya.getdata();
    employee::getcount();

    gappu.setdata();
    gappu.getdata();
    employee::getcount();

    return 0;
}