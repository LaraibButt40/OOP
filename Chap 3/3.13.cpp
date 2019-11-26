#include<iostream>
#include<string>
using namespace std;
class Invoice
{
	public:
		Invoice(string rtf, string , int, int);
		void setPartNumber(string);
		string getPartNumber();
		void setPartDescription(string);
		string getPartDescription();
		void setItemQuantity(int);
		int getItemQuantity();
		void setItemPrice(int);
		int getItemPrice();
		int getInvoiceAmount();
		private:
			string PartNumber;
			string PartDescription;
			int ItemQuantity;
			int ItemPrice;
};
Invoice::Invoice(string number,string description,int price,int quantity )
{
	PartNumber=number;
	PartDescription=description;
	if(quantity>0)
	ItemQuantity=quantity;
	else
	cout<<"Initial Quantity is invalid.";
	if(price>0)
	ItemPrice=price;
	else
	cout<<"Initial Price is invalid.";
}
void Invoice::setPartNumber(string number)
{
if(number.length()<=30)
PartNumber=number;
if(number.length()>30)
{
	PartNumber=number.substr(0,30);
	cout<<"Name:"<<number<<"\"Exceeds Maximum Length(30).\n";
	cout<<"Limiting PartNumber to first 30 Characters.\n"<<endl;
}
}
void Invoice::setPartDescription(string description)
{
	if(description.length()<=30)
	PartDescription=description;
	if(description.length()>30)
	{
		PartDescription=description.substr(0,30);
		cout<<"Name:"<<description<<"\"Exceeds Maximum Length(30).\n";
	    cout<<"Limiting PartNumber to first 30 Characters.\n"<<endl;
	}
}
void Invoice::setItemQuantity(int quantity)
{
	if(quantity>0)
	ItemQuantity=quantity;
	else
	{
	ItemQuantity=0;
	cout<<"ItemQuantity is Invalid."<<endl;
    }
}
void Invoice::setItemPrice(int price)
{
	if(price>0)
	ItemPrice=price;
	else
	{
		ItemPrice=0;
		cout<<"ItemPrice is Invalid."<<endl;
	}
}
string Invoice::getPartNumber()
{
	return PartNumber;
}
string Invoice::getPartDescription()
{
	return PartDescription;
}
int Invoice::getItemQuantity()
{
	return ItemQuantity;
}
int Invoice::getItemPrice()
{
	return ItemPrice;
}
int Invoice::getInvoiceAmount()
{
	return ItemQuantity*ItemPrice;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter Price of First Item:";
	cin>>a;
	cout<<"Enter Quantity of First Item:";
	cin>>b;
	cout<<"Enter Price of Second Item:";
	cin>>c;
	cout<<"Enter Quantity of Second Item:";
	cin>>d;
	Invoice Item1("CS01", "Pencils",a,b);
	Invoice Item2("CS02", "Erasers",c,d);
	cout<<"Item's 1 initial PartNumber:"<<Item1.getPartNumber()<<"\n"<<"Part Description is:"<<Item1.getPartDescription()<<"\n";
	cout<<"Price per Item is:"<<Item1.getItemPrice()<<"\n"<<"Quantity of Item is:"<<Item1.getItemQuantity()<<"\n";
	cout<<"Item's 1 Total Amount is:"<<Item1.getInvoiceAmount()<<"\n";
	cout<<"Item's 2 initial PartNumber:"<<Item2.getPartNumber()<<"\n"<<"Part Description is:"<<Item2.getPartDescription()<<"\n";
	cout<<"Price per Item is:"<<Item2.getItemPrice()<<"\n"<<"Quantity of Item is:"<<Item2.getItemQuantity()<<"\n";
	cout<<"Item'2 Total Amount is:"<<Item2.getInvoiceAmount()<<"\n";
	return 0;
}
