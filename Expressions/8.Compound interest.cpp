#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amount;
	cout<<"Enter amount:";
	cin>>amount;
	float one=0.0,two=0.0,three=0.0;
	one=(float)amount*4/100+amount;
	two=(float)one*4/100+one;
	three=(float)two*4/100+two;
	cout<<one<<"\n"<<two<<"\n"<<three;
	return 0;
}
