#include<bits/stdc++.h>
using namespace std;
int main()
{
	string month;
	int day;
	cout<<"Enter month:";
	cin>>month;
	cout<<"Enter day:";
	cin>>day;
	if(month=="January"||month=="February")
	{
		cout<<"Spring";
	}
	else if((month=="December"&&day>21)||(month=="March"&&day<=20))
	{
		cout<<"Spring";
	}
	else if(month=="April"||month=="June")
	{
		cout<<"Summer";
	}
	else if((month=="March"&&day>20)||(month=="June"&&day<=21))
	{
		cout<<"Summer";
	}
	else if(month=="July"||month=="August")
	{
		cout<<"Fall";
	}
	else if((month=="June"&&day>21)||(month=="September"&&day<=22))
	{
		cout<<"Fall";
	}
	else if(month=="October"||month=="November")
	{
		cout<<"Winter";
	}
	else if((month=="September"&&day>22)||month=="December"&&day<=21)
	{
		cout<<"Winter";
	}
	else
	{
		cout<<"Enter correct month";
	}
	return 0;
}
