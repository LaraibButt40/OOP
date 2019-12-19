//Program 4.20
#include<iostream>
using namespace std;
int main()
{
	int Pass=0, Fail=0;
	int Students=1, Result;
	while(Students<=10)
	{
		cout<<"Enter the Result 1 for Pass 0 for Fail:";
		cin>>Result;
		if(Result==1)
		{
			Pass++;
			Students++;
		}
		else if (Result==2)
		{
			Fail++;
			Students++;
		}
		else
		{
			cout<<"Invalid Result. \n";
		}
	}
	cout<<"Total No. of Passed Students:"<<Pass<<"\n";
	cout<<"Total No. of Failed Students:"<<Fail<<"\n";
	if(Pass>8)
	{
		cout<<"Bonus to Professor!";
	}
	else
	cout<<"No Bonus for Professor!";
}
