//Program 4.13
#include<iostream>
using namespace std;
int main()
{
	float KM,Liters,KMS_p,t_KMS;
	int n=1;
	while(KM!=-1)
	{
		cout<<"Enter Kilometers Driven(-1 to quit):";
		cin>>KM;
		if(KM!=-1)
		{
		cout<<"Enter Liters used:";
		cin>>Liters;
		KMS_p=KM/Liters;
		cout<<"KMS per liter this trip:"<<KMS_p<<endl;
		t_KMS=(t_KMS+KMS_p)/n;
		cout<<"Total KMS per liter:"<<t_KMS;
		n++;
		cout<<"\n\n";
	    }
	}
	return 0;
}
