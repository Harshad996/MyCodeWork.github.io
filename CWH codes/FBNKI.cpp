#include<iostream>
using namespace std;
int main()
{
int sum = 0, n;
int a = 0;
int b = 1;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonacci series: ";
for(int i=0;i<n;i++)
{
cout << sum << " ";
a = b;  // swap elements
b = sum;
sum = a + b;  // next term is the sum of the last two terms 
}
return 0;
}