#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
 
int main()
{
    int number_of_records{};
	 
    cout << "Enter Number of records you want to keep: ";
	cin >> number_of_records;
	cin.ignore();
	
	string book_titles[number_of_records];
	double prices[number_of_records];
	double quantities[number_of_records];
	double total_stock_value[number_of_records];
	double expensive_price{};
	string expensive_book{};
	int temp_a_index{0};
	double cheapest_price{};
	string cheapest_book{};
	int temp_b_index{0};
	
	
	
	cout << "Enter Title of books" << "\n";
	for (int i = 0 ; i < number_of_records ; i++)
	{
		cout << "Enter Title of book " << (i+1) << ": " ;
		getline(cin ,book_titles[i] );
	}
	
	cout <<"\n";
	cout << "Enter prices of books" << "\n";
	for (int i = 0 ; i < number_of_records ; i++)
	{
		cout << "Enter price of " << book_titles[i] << ": ";
		cin >> prices[i] ;
	}
	
	cout <<"\n";
	cout << "Enter quantities of books" << "\n";
	for (int i = 0 ; i < number_of_records ; i++)
	{
		cout << "Enter quantities of " << book_titles[i] << ": ";
		cin >> quantities[i] ;
	}
	
	for (int i = 0 ; i < number_of_records ; i++)
	{
		total_stock_value[i] = prices[i] * quantities[i];	
	}
	
	cout << "---------------------------------------------------" << "\n";
	cout << left << setw(20) << "Book titles" << left << setw(10) << "Prices" << left << setw(10) << "Quantity" << left << setw(10) << "Total Stock Value" << "\n";
	for (int i = 0 ; i < number_of_records ; i++)
	{
		cout << left << setw(20) << book_titles[i] << left << setw(10) << prices[i] << left << setw(10) << quantities[i] << left << setw(10) << total_stock_value[i] << "\n";	
	}
	
	expensive_price = prices[0];
	
	for (int i = 1 ; i < number_of_records ; i++)
	{
		if (expensive_price < prices[i])
		{
			expensive_price = prices[i];
			temp_a_index = i;
		}
	}
	
	expensive_book = book_titles[temp_a_index];
	
	cheapest_price = prices[0];
	
	for (int i = 1 ; i < number_of_records ; i++)
	{
		if (cheapest_price > prices[i])
		{
			cheapest_price = prices[i];
			temp_b_index = i;
		}
	}
	
	cheapest_book = book_titles[temp_b_index];
	
	cout << "\n";
	cout << "Most expensive book is : " << expensive_book << "\n";
	cout << "Most cheapest book is : " << cheapest_book << "\n";	
	
}
