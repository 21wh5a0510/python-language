#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cout<<"Enter number:";
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	cout<<"Sum of Digits are "<<sum;
	return 0;
}
