//program 4.21
#include<iostream>
using namespace std;
int main()
{
	int count=0;
	while(count<=12)
	{
		cout<<(count % 3 ? "--->": "#####")<<endl;
		++count;
	}
}

