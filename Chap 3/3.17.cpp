#include <iostream>
#include <string>
using namespace std;

class HealthProfile
{
    private:
    string firstname;
    string lastname;
    int birth_day;
    int birth_month;
    int birth_year;
    int current_day;
    int current_month;
    int current_year;
    string Gender;
    float Height;
    float weight;
    int age;
    double Maxheartrate;
    double targetRate;
    float bmi;
    public:
void Getdata()
   {
        cout<<"Please Enter your firstname\n";
        getline (cin, firstname);
        cout<<"\n";
        cout<<"Please Enter your lastname\n";
        getline (cin, lastname);
        cout<<"\n";
        cout<<"Please Enter your date of birth\n";
        cout<<"year:";
        cin >> birth_year;
        cout<<"month:";
        cin>> birth_month;
        cout<<"day:";
        cin >> birth_day;
        
    cout<<"Data for:"<<firstname<< "  "<<lastname<<endl;
    cout<< "Your date of birth in the format dd/mm/yyyy is:"<<birth_day<<"/"<<birth_month<<"/"<<birth_year<<endl;
    if ((birth_day <0 || birth_day >31) && (birth_month <0 || birth_month >12))
    {
    cout << "Invalid Date of Birth Entered" << endl << "Again Enter your Date of Birth (d /m /y) :";
    cout<< "Your date of birth in the format dd/mm/yyyy is:"<<birth_day<<"/"<<birth_month<<"/"<<birth_year<<endl;
    }
    cout << "Enter your Height (Inches) :";
    cin >>Height;
    cout << "Enter your Weight (Pounds) :";
    cin >>weight;
    cout<<"\n";
    }
void getAge ()
    {
        cout<<"Enter the current date dd/mm/yyyy \n";
        cout<<"Day: ";
        cin>>current_day;
        cout<<"month:";
        cin>>current_month;
        cout<<"year:";
        cin>> current_year;
    if (current_year>=birth_year)
	{
    age=(current_year-birth_year);
    cout<<"Your age is:"<<age;
    }
    else
    {
    cout<<"Invalid Date-of-birth.";
    }
    }
void getMaximumHeartRate()
   {
    Maxheartrate= 220-age;
    cout<<"Your Maximum heartrate is:"<<Maxheartrate<<endl;
   }
void getTargetHeartRate()
   {
    targetRate=  Maxheartrate*0.60;
    cout<< "Your target heartrate is"<<targetRate<<endl;
    }
void getbmi()
{
	bmi = ((weight) * 703) / ((Height)*(Height)); //calculatesthe BMI
	cout<<"Your BMI is:"<<bmi;
}
};
void BMI_Chart(); //print the BMI values Chart

int main()
{
	HealthProfile Laraib;
    cout<<"Welcome to Heart Rate System\n\n";
    Laraib.Getdata();
    Laraib.getAge();
    cin.ignore();
    cin.get();
    Laraib.getMaximumHeartRate();
    Laraib.getTargetHeartRate();
    Laraib.getbmi();
	cout<<"\n\n";
    BMI_Chart();
    system("pause");
    return 0;
}
void BMI_Chart() //Function to print BMIVlues Chart
{
       cout << endl << "**************************************" << endl;
       cout << "BMI Values" << endl;
       cout << "Under Weight : " << "less than 18.5" << endl;
       cout << "Normal :       " << "between 18.5 and 24.9" << endl;
       cout << "Overweight :   " << "between 25 and 29.9" << endl;
       cout << "Obese :        " << "30 or greater" << endl;
       cout << "**************************************" << endl;
}
