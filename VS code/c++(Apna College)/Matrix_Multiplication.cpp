#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int arr1[n1][n2], arr2[n2][n3];

    cout << "Enter Matrix of " << n1 << "," << n2 << endl;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter Matrix of " << n2 << "," << n3 << endl;

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout<<endl;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            int sum = 0;
            for (int k = 0; k < n2; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}