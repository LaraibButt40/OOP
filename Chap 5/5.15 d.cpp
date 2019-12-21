//Program 5.15 (d)
#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<=11; i++)
	{
		for(int j=10;j>=1; j--)
		{
			cout<<(j>=i? " " :"*");
		}
		cout<<"\n";
	}
	return 0;
}
