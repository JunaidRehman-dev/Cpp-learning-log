#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double celcius_1{};
	double celcius_2{};
	double celcius_3{};
	
	double Fahrenheit_1{};
	double Fahrenheit_2{};
	double Fahrenheit_3{};
	
	double Kelvin_1{};
	double Kelvin_2{};
	double Kelvin_3{};
	
	
	cout << "Enter 3 temperatures: ";
	cin >> celcius_1 >> celcius_2 >> celcius_3;
	
	Fahrenheit_1 =  celcius_1 * 9/5 + 32;
	Fahrenheit_2 =  celcius_2 * 9/5 + 32;
	Fahrenheit_3 =  celcius_3 * 9/5 + 32;
	
	Kelvin_1 = celcius_1 + 273;
	Kelvin_2 = celcius_2 + 273;
	Kelvin_3 = celcius_3 + 273;
	
	cout << fixed << setprecision(1);
	cout << setw(10) << "Celsius" << setw(10) << "Fahrenheit" << setw(10) << "Kelvin" << "\n";
	cout << setw(10) << celcius_1 << setw(10) << Fahrenheit_1 << setw(10) << Kelvin_1 << "\n";
	cout << setw(10) << celcius_2 << setw(10) << Fahrenheit_2 << setw(10) << Kelvin_2 << "\n";
	cout << setw(10) << celcius_3 << setw(10) << Fahrenheit_3 << setw(10) << Kelvin_3 << "\n";
	
	
	
}