//Program 5.15 (b)
#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<=10; i++)
	{
		for(int j=10; j>=i; j--)
		{
			cout<<"*";
		}
	cout<<"\n";
	}
	return 0;
}
