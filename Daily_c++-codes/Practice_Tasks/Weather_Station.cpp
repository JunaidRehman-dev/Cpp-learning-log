#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));
	
	int reading{};
	int max{56};
	int min{10};
	double deviation{};
	double feelsLike{};
	double ceilDeviation{};
	double rounded_Reading{};
	
	reading = (rand()%(max-min+1)+min);                               //"fabs" here is being used as a modulus to poisitve any negative number.
	deviation = fabs(reading - 20.0);                                 //  a  fixed reference average temperature of 20.0 is setted here .
	feelsLike = reading + sqrt(deviation);
	ceilDeviation = ceil(deviation);                                  //"ceil" here is being used to round up the deviation to the nearest integer  like (4.1) becomes (5.0).
	rounded_Reading = round(reading);
	
	
	cout << "(Values below are one example run - every run will differ, since the reading is random.)" << "\n";
    cout << "\n";
	cout << left << setw(30) << "Reading" << ": " << reading << "\n";
	cout << left << setw(30) << "Deviation from average" << ": " << deviation << "\n";
	cout << left << setw(30) << "Feels-like estimate" << ": " << feelsLike << "\n";
	cout << left << setw(30) << "Ceil(Deviation)" << ": " << ceilDeviation << "\n";
	cout << left << setw(30) << "Rounded Rounded" << ": " << rounded_Reading << "\n";
	
	
	
	
	  
	
	
}