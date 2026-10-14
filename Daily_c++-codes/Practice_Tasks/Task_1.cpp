//Write a program that takes two integers from the user and prints the larger one. Then print whether
//the two numbers are "Equal" or "Not Equal". You are NOT allowed to use if/else; use only the
//ternary operator.
//Sample Output:
//Enter two numbers: 14 9
//Larger number: 14
//Not Equal



#include <iostream>
#include<string>

using namespace std;

int main()
{
	int num1{};
	int num2{};
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	(num1>num2)?
	cout<<"Larger number: " << num1 << "\n":
		cout<<"Larger number: " << num2 << "\n";
		
	cout << "Not equal";
	
	
	
	return 0;
}