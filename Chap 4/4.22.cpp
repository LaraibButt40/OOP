//Program 4.22
#include<iostream>
using namespace std;
int main()
{
	int row{12};
	unsigned int column;
	while(row>=0)
	{
		column=1;
		while(column<=6)
		{
			if(row% 3==0)
			{
				cout<<"#";
			}
			else 
			{
				cout<<(column % 6 ? "-" : "-"); //Output
			}
			++column;
		}
		--row;
		cout<<endl;
	}
}
