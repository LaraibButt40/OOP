//Program 5.15 (c)
#include<iostream>
using namespace std;
int main()
{
	int n=1;
	while(n<=10)
	{
		for(int a=1;a<=n;a++)
		{
			cout<<" ";
		}
		for(int b=10;b>=n; b--)
		{
			cout<<"*";
		}
		cout<<"\n";
		n++;
	}
	return 0;
}
