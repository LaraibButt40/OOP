//Program 4.19
#include<iostream>
using namespace std;
int main()
{
	int N=1,n;
	int max1=0,max2=0;
	while(N<=10)
	{
	cout<<"Enter a Number without any repetition:";
    cin>>n;
    if(max1<n)
    {
    max2=max1;
    max1=n;
	}
    N++;
	}
	cout<<"First Maximum Number is :"<<max1<<"\n";
	cout<<"Second Maximum Number is :"<<max2;
    return 0;
}
