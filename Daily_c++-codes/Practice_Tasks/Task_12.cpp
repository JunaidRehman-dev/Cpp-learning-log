#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int marks_1{};
	int marks_2{};
	int marks_3{};
	int total{};
	double average{};
	int rounded_average{};
	bool passed{};
	
	double marks_short{};
	
	cout << "Enter marks of 3 subjects (out of 100): ";
	cin >> marks_1 >> marks_2 >> marks_3;
	
	total = marks_1 + marks_2 + marks_3;
	cout << "Total: " << total << "\n";
	
	average = total/3.0;
	cout << fixed << setprecision(2);
	cout << "Average: "<< average << "\n";
	
	rounded_average = static_cast<int>(average);
	cout << "Rounded Average: "<< rounded_average << "\n";
	
	
	
	
	passed = (average >=50 && marks_1 >= 33 && marks_2 >= 33 && marks_3 >= 33 );
	
	if (passed)
	{
		cout << "Result: Pass" << "\n";
	
	}
	
	else
	{
		cout << "Result: Fail" << "\n";
	}
	
	if (average >= 80)
	{
		cout << "Distinction achieved!" << "\n";
	}
	
	if (!passed && total < 150)
	{
		
		marks_short = 150 - total;
		
		cout << "Marks short for 50% average: " << marks_short;
		
	}
	
	
	
}