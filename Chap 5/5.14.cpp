//Program 5.14
#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
   double amount; // amount on deposit at end of each year
   double principal = 1000.0; // initial amount before interest
   double rate; // interest rate

   for (rate = 0.05; rate <= 0.1; rate += 0.01)
   {   // display headers
	   cout << "Compound interest with rate " << rate << endl;
	   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
	   cout << fixed << setprecision( 2 );                    // set floating-point number format
        
		//For Loop for calculating the amount on deposit for each of ten years
	   for ( int year = 1; year <= 10; ++year ) 
	   {
		   amount = principal * pow( 1.0 + rate, year );    // calculate new amount for specified year
		   cout << setw( 4 ) << year << setw( 21 ) << amount << endl;   // display the year and the amount
	   }
	   cout << endl;
   }
} 
