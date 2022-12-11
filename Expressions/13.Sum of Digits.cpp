/*Write a program that reads a four-digit integer from the user and displays the sum of its digits.
For example, if the user enters 3141 then your program should display 3+1+4+1=9.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cout<<"Enter 4 digit number:";
	cin>>n;
	cout<<"The sum of digits is "<<(n[0]-'0')+(n[1]-'0')+(n[2]-'0')+(n[3]-'0');
	return 0;
}
