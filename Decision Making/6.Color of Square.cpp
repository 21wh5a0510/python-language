#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter a Pattern:";
	cin>>s;
	if(s[0]>='a' && s[0]<='h')
	{
		if(((int(s[0])%2==1) && (s[1]%2==1)) || ((int(s[0])%2==0) && (s[1]%2==0)))
		{
			cout<<"Black Square";
		}
		else
		{
			cout<<"White Square";
		}
	}
	else
	{
		cout<<"not a valid pattern";
	}
	return 0;
}
