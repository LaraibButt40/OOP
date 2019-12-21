//Program 4.16
#include<iostream>
#include<string>
using namespace std;
int main() {
    double total_f = 0;
    while (true) {
        int laps;
        double ss_rate, contribution;   //ss means Sponsership 
           cout << "Enter laps completed(-1 to end): ";
           cin >> laps;
        if (laps == -1) {
           cout << "Total funds Raised: " << total_f;
            return 0;
        }
         cout << "Enter sponsorship rate: ";
         cin >> ss_rate;
        contribution = laps*ss_rate;
        if (laps > 40) {
            contribution += (40-laps)*ss_rate*1.5;
        }
          cout << "Student contribution: " << contribution << "\n";
        total_f += contribution;
    }
}
