#include<iostream>
using namespace std;
int main()
{
	char value;
	cout<<"Enter any character of upper or lower case or any digit or special characters:";
	cin>>value;
	cout<<static_cast<int>(value);
	return 0;
}
