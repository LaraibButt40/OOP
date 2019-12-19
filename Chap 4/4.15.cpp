//Program 4.15
#include<iostream>
using namespace std;
int main ()
{
	float working_hours,leave;
	while(working_hours!=-1)
	{
	cout<<"Enter the working hours of the workers:";
	cin>>working_hours;
	if(working_hours!=-1)
	{
    leave=(working_hours/10)+2;
    cout<<"Accured Leave:"<<leave;
    cout<<"\n";
	}
	}
	return 0;
}
