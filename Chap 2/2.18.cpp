#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of first number:";
	cin>>a;
	cout<<"Enter the value of second number:";
	cin>>b;
	if(a>b)
	cout<<"First number is greater than second.";
	else if(a<b)
	cout<<"Second number is greater than first.";
	else
	cout<<"Numbers are Equal.";
	return 0;
}
