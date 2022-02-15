#include <iostream>

using namespace std;

int main()
{
    int n1, n2,s;
    cin >> n1 >> n2;
    int arr[n1][n2];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    while(s != 2){
    int target;
    cout << "Enter seaching element" << endl;
    cin >> target;

    int r = 0, c = n2 - 1;
    bool flag = false;
    
    while (r < n1 && c >= 0)
    {
        if (arr[r][c] == target){
            flag = 1;
            break;
        }
        else if (arr[r][c] > target)
            c--;
        else
            r++;
    }

    if (flag)
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;
     
     cout<<"1.Re-Run"<<endl;
     cout<<"2.Exit"<<endl;
     cin>>s;
    }

    return 0;
}