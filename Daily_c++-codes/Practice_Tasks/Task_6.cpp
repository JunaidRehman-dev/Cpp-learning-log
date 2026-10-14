#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float basic_salary{};
	float house_rent{};
	float medical{};
	float gross_salary{};
	float tax{};
	float net_salary{};
	
	
	cout << "Enter basic salary: ";
	cin >> basic_salary;
	
	house_rent = (basic_salary*45)/100;
	medical = (basic_salary*10)/100;
	gross_salary = basic_salary + house_rent + medical;
	tax = ((gross_salary>50000)?(gross_salary * 5)/100:0);
	net_salary = 	gross_salary + tax;
	
	cout << fixed << setprecision(2);
	cout << left << setw(20)<< "Basic Salary: " << right << setw(12)<< basic_salary <<"\n";
	cout << left << setw(20)<< "House Rent: " << right << setw(12)<< house_rent <<"\n";
	cout << left << setw(20)<< "Medical Allowance: " << right << setw(12)<< medical <<"\n";
	cout << left << setw(20)<< "Gross Salary: " << right << setw(12)<< gross_salary <<"\n";
	cout << left << setw(20)<< "Tax: " << right << setw(12)<< tax <<"\n";
	cout << left << setw(20)<< "Net Salary: " << right << setw(12)<< net_salary <<"\n";
	
	
	
}
