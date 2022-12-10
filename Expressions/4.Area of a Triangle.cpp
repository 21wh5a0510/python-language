#include<bits/stdc++.h>
using namespace std;
int main()
{
	float s1,s2,s3,s,area;
	cout<<"Enter side:";
	cin>>s1>>s2>>s3;
	s=(s1+s2+s3)/2;
	area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"Area of triangle:"<<area;
	return 0;
}
