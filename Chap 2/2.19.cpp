#include<iostream>
using namespace std;
int main()
{
	int a, b, sum, product;
	float avg;
	cout<<"Enter the value of first number:";
	cin>>a;
	cout<<"Enter the value of second number:";
	cin>>b;
	if(a>b)
	cout<<" \nFirst number is greater than second."<<endl;
	else
	cout<<" \nSecond number is greater than first."<<endl;
	sum=a+b;
	cout<<"Sum is :"<<sum<<endl;
	product=a*b;
	cout<<"Product is:"<<product<<endl;
	avg=sum/2;
	cout<<"Average is:"<<avg<<endl;
	return 0;
}
	
