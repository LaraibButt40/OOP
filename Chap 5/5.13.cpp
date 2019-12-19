//Program 5.13
#include<iostream>
using namespace std;
int main()
{
	long fact=1;
	cout<<"Integer "<<"\t"<<"Factorial"<<"\n";
	for(int i=1;i<=20;i++)
	{
		fact=fact*i;
		cout<<i<<" \t\t"<<fact<<"\n";
	}
	return 0;
}
