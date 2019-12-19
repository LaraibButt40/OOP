//Program 5.19
#include<iostream>
using namespace std;
int main()
{
	double p=0;
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			p=p-(4.0/(2*i-1));
		}
		else
		{
			p=p+(4.0/(2*i-1));
		}
        printf("%f\n",p);
	}
}

