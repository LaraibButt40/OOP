//Program 4.14
#include<iostream>
#include<string>
using namespace std;
main()
{
	int account_no;
	float balance, total_charges, total_credits, credit_limit, new_balance;
	cout<<"Enter account number (or -1 to quit):";
	cin>>account_no;
	while(account_no!=-1) //checking while condition
	{
		cout<<"Enter beginning balance:";
		cin>>balance;
		cout<<"Enter total charges:";
		cin>>total_charges;
		cout<<"Enter total credits:";
		cin>>total_credits;
		cout<<"Enter Credit limit:";
		cin>>credit_limit;
		
		new_balance=(balance+total_charges)-total_credits; //formula for new balance
		cout<<"New Balance is "<<new_balance<<"\n";
		cout<<"Account number: "<<account_no<<"\n";
		cout<<"Credit Limit:"<<credit_limit<<"\n";
		cout<<"Balance:"<<new_balance<<"\n";
		if(credit_limit<new_balance) //credit limit condition
		cout<<"Credit_Limit Exceeded.";
		cout<<"\n\n";
		cout<<"Enter account number (or -1 to quit):";
	    cin>>account_no;
	}
}
