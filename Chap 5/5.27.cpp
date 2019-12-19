//Program 5.27
#include <iostream>
using namespace std;

int main()
{
	for ( int count = 1; count <= 10; ++count ) // loop 10 times
	{ 
		if ( count != 5 ) // if count is 5,
			cout << count << " ";
	} // end for
		
	cout << "\nSkip printing 5 without using continue" << endl;
} // end main
