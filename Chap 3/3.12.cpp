#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter the credit Amount of Account1:";
	cin>>a;
	cout<<"Enter the Credit Amount of Account2:";
	cin>>b;
	cout<<"Enter the Debit Amount of Account1:";
	cin>>c;
	cout<<"Enter the debit Amount of Account2:";
	cin>>d;
 Account Account1(500000);
 Account Account2(900000);
 cout << "Account1's initial balance is: "<< Account1.getAccountBalance();
 cout<<"\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.credit(a);
 Account2.credit(b);
 cout << "\nAccount1's balance after credit is: "<< Account1.getAccountBalance()<< "\nAccount2's balance after credit is: "<< Account2.getAccountBalance() << endl;
 Account1.debit(c);
 Account2.debit(d);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 return 0;
}
