#include<iostream>
#include<cmath>

using namespace std;

int main()
{
int number, temp, rem, result = 0, n = 0,p;

cout << "Enter an integer : ";
cin >> number;

temp = number;

// Finding the number of digits

while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;

// Checking if the number is armstrong

while (temp != 0)
{
rem = temp%10;
p = pow(rem, n);
result = result + p;
temp  = temp/10;
}

if(result == number)
cout << number << " is an Armstrong number\n";
else
cout << number << " is not an Armstrong number\n";

return 0;
}
