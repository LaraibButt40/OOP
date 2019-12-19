//Program 5.25
#include<iostream>
using namespace std;
main()
{
	for (int i=1; i<=100; i++)
	{
		if(i==10)
		{
			continue;// skip 10 
			break;// stop execution
		}
		else
		{
			cout<<i<<"\n";
		}
	}
}

