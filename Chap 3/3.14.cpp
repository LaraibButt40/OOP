#include<iostream>
#include <string>
using namespace std;

class Employee
{
 public:
  Employee( string, string, int );
  void setFirstName( string );
  string getFirstName();
  void setLastName(string);
  string getLastName();
  void setMonthlySalary(int);
  int getMonthlySalary();
 private:
  string firstName;
  string lastName;
  int monthlySalary;
};
Employee::Employee( string first, string last, int salary)
{
 firstName=first;
 lastName=last;
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
void Employee::setFirstName( string first)
{
 if ( first.length() <= 25 )
  firstName = first;
 if ( first.length() > 25 )
 {
  firstName = first.substr( 0, 25 );
  cout << "Name \"" << first <<"\" exceeds maximum length (25).\n"<< "Limiting firstName to first 25 characters.\n" << endl;
 }
}
void Employee::setLastName(string last )
{
 if ( last.length() <= 25 )
  lastName = last;
 if ( last.length() > 25 )
 {
  lastName = last.substr( 0, 25 );
  cout << "Name \"" << last <<"\" exceeds maximum length (25).\n"<< "Limiting lastName to first 25 characters.\n" << endl;
 }
}
void Employee::setMonthlySalary(int salary )
{
 if(salary>0)
  monthlySalary=salary;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
string Employee::getFirstName()
{
 return firstName;
}
string Employee::getLastName()
{
 return lastName;
}
int Employee::getMonthlySalary()
{
 return monthlySalary;
}
int main()
{
	string F1,F2,L1,L2;
	int S1,S2;
	cout<<"Enter First Name of Employee1:";
	cin>>F1;
	cout<<"Enter Last Name of Employee1:";
	cin>>L1;
	cout<<"Enter the Monthly Salary of Employee1:";
	cin>>S1;
	cout<<"\nEnter First Name of Employee2:";
	cin>>F2;
	cout<<"Enter Last Name of Employee2:";
	cin>>L2;
	cout<<"Enter the Monthly Salary of Employee2:";
	cin>>S2;
 Employee Employee1(F1,L1,S1);
 Employee Employee2(F2,L2,S2);
 cout << "\nEmployee1's name is: "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
 cout<< "Monthly Salary is: "<< Employee1.getMonthlySalary()<< " and Annual Salary is: "<< Employee1.getMonthlySalary()*12<< endl;
 cout<<"After 10 percent increment in salary:"<<endl;
 int incrementedSalary1=Employee1.getMonthlySalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 Employee1.setMonthlySalary(incrementedSalary1);
 cout<< "Employee1's Monthly Salary is: "<< Employee1.getMonthlySalary()<< " and Annual Salary is: "<< Employee1.getMonthlySalary()*12<<endl<<endl;
 cout << "Employee2's name is: "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
 cout<< "Monthly Salary is: "<< Employee2.getMonthlySalary()<< " and Annual Salary is: "<< Employee2.getMonthlySalary()*12<< endl;
 cout<<"After 10 percent increment in salary:"<<endl;
 int incrementedSalary2=Employee2.getMonthlySalary();
 incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
 Employee2.setMonthlySalary(incrementedSalary2);
 cout<< "Employee2's monthly salary is: "<< Employee2.getMonthlySalary()<< " and Annual Salary is: "<< Employee2.getMonthlySalary()*12<< endl;
 return 0;
}
