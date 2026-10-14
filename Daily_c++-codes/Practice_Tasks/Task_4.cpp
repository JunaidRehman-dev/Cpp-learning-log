#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	string name_1{"Ali"};
	string name_2{"Sara"};
	string name_3{"Hamza"};
	
	
	int marks_1{420};
	int marks_2{238};
	int marks_3{365};
	
	double percentage_1{(420.0/500)*100};
	double percentage_2{(238.0/500)*100};
	double percentage_3{(365.0/500)*100};
	
	cout << left << setw(15) << "Name" << left << setw(10) << "Marks" << setw(15) << "Percentage" << setw(10) << "Status" << "\n";
	cout << left << setw(15) << name_1 << left << setw(10) << marks_1 << setw(15) << percentage_1 << setw(10) << ((percentage_1>=50)?"Pass":"Fail") << "\n";
	cout << left << setw(15) << name_2 << left << setw(10) << marks_2 << setw(15) << percentage_2 << setw(10) << ((percentage_2>=50)?"Pass":"Fail")<< "\n";
	cout << left << setw(15) << name_3 << left << setw(10) << marks_3 << setw(15) << percentage_3 << setw(10) << ((percentage_3>=50)?"Pass":"Fail") << "\n";
}