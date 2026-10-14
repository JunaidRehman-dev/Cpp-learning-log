#include<iostream>
#include<string>

using namespace std;

int main()
{
	const double pi = 3.14159;
	double area;
	double circumference;
	double radius;
	
	cout <<"Enter radius: ";
	cin >> radius ;
	
	cout <<"Area: " << pi*radius*radius << "\n";
	cout <<"Circumference: " << 2 * pi * radius; 
	
}