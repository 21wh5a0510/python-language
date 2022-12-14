#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string result="";
	int q;
	cin>>q;
	while(q!=0)
	{
		int r=q%2;
		string tmp = new string(itoa(r));
		result=tmp+result;
		q=q/2;
	}
	cout<<result;
	return 0;
}
