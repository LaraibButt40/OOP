#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter any five digit integer:";
	cin>>a;
	b=a/10000;
	a=a%10000;
	cout<<b;
	b=a/1000;
	a=a%1000;
	cout<<"   "<<b;
	b=a/100;
	a=a%100;
	cout<<"   "<<b;
	b=a/10;
	a=a%10;
	cout<<"   "<<b;
	cout<<"   "<<a;
	return 0;
}
