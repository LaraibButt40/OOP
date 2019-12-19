//Program 4.17
#include<iostream>
#include<string>
using namespace std;
main()
{
	int counter=1;
	int units, emp;
	int max=0;
	while(counter<=10)
	{
		cout<<"Please enter Units for sales_man # "<<counter<<"\n";
		cin>>units;
		if(max<units)
		{
			max=units;
			emp=counter;
		}
		counter++;
	}
	cout<<"The maximum units selled are "<<max;
	cout<<"The maximum units selled are by sales_man "<<emp;
	return 0;
}
