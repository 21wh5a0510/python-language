#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,odd=1;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=odd;
		odd+=2;
	}
	cout<<sum;
	return 0;
}
