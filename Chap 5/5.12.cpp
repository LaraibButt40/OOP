//Program 5.12
#include<iostream>
using namespace std;
int main()
{
	int n=1;
	for(int i=1;i<=50;i++)
	{
		if(i%3==0)
		{
			cout<<"Product of Multiples of 3:"<<i*n<<"\n";
			n=i*n;
		}
		
	}
	return 0;
}
