#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a,dec;
	cout<<"Enter string:";
	cin>>s;
	int length=s.length();
	for(int i=0;i<s.length();i++)
	{
		a=(s[i]-'0')*pow(2,length);
		dec+=a;
		length--;
	}
	cout<<dec;
	return 0;
}
