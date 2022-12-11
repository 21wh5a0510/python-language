#include<bits/stdc++.h>
using namespace std;
int main()
{
	float cost;
	cout<<"Enter cost:";
	cin>>cost;
	float  tax,tip,total;
	tax=(18*cost)/100;
	cout<<"The tax is "<<tax<<"\n";
	tip=(5*cost)/100;
	cout<<"The tip is "<<tip<<"\n";
	total=tax+tip+cost;
	cout<<"The total amount id "<<total;
}
