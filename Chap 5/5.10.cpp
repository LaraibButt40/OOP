//Program 5.10
#include<iostream>
using namespace std;
int main()
{
	int n, num;
	cout<<"How many numbers you want to enter?";
	cin>>n;
	int counter=1,min;
	while(counter<=n)
	{
		cout<<"Please enter number:"<<counter<<" ";
		cin>>num;
		
		if (min>num)
		{
			min=num;
		}
		counter++;
	}
	cout<<"The minimum number entered is:"<<min<<endl;
	return 0;
}
