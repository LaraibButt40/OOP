#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Enter Five integers:";
	cin>>a, b, c, d, e;
	//for largest number
	if (a>b && a>c && a>d && a>e)
	{
		cout<<"a is the Greatest number in all.";
	}
	else if (b>a && b>c && b>d && b>e)
	{
		cout<<"b is the Greatest number in all.";
	}
	else if (c>a && c>b && c>d && c>e)
	{
		cout<<"c is the Greatest number in all.";
	}
	else if (d>a && d>b && d>c && d>e)
	{
		cout<<"d is the Greatest number in all.";
	}
	else
	{
		cout<<"e is the Greatest number in all.";
	}
	cout<<"\n";
	// for smallest number
	if (a<b && a<c && a<d && a<e)
	{
		cout<<"a is the smallest number in all.";
	}
	else if (b<a && b<c && b<d && b<e)
	{
		cout<<"b is the smallest number in all.";
	}
		else if (c<a && c<b && c<d && c<e)
	{
		cout<<"c is the smallest number in all.";
	}
		else if (d<a && d<b && d<c && d<e)
	{
		cout<<"d is the smallest number in all.";
	}
	else
	{
		cout<<"e is the smallest number in all.";
	}
	return 0;
}
