#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter Number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"The Sum of first "<<n<<" integers are "<<sum;
	return 0;
}
