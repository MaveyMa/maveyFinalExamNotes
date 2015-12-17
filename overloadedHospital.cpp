//Monday, Dec. 14th, 2015
//OVERLOADED FUNCTIONS
//USE THE SAME NAME FOR THE FUNCTION, BUT DIFFERENT NUMBER OF PARAMETERS
#include<cmath>
#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

void bill(double hosp_services, double meds);
void bill(double hosp_services, double meds, double dailyRate, int days);

int main()
{	
	int patient;
	cout << "Enter (1) if you're an in-patient.\n";
	cout << "Enter (2) if you're an outpatient.\n";
	cin >> patient;

	if (patient == 1)
	{
		bill();
	}
	else if (patient == 2)
	{
		bill();
	}
	else
	{
		cout << "Please only enter 1 or 2.\n";
	}
	return 0;
}//END MAIN


