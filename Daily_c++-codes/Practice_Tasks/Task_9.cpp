#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	

	
	double item_price_1{};
	double item_price_2{};
	double item_price_3{};
	
	double quantity_amount_1{};
	double quantity_amount_2{};
	double quantity_amount_3{};
	
	int quantity_1{};
	int quantity_2{};
	int quantity_3{};
	
	int max_price{500};
	int min_price{50};

    int max_quantity{5};
	int min_quantity{1};
	
	double amount_1{};
	double amount_2{};
	double amount_3{};
	
	double sub_total{};
	double discount{};
	double net_total{};
	
	
	
	item_price_1 = (rand()%(max_price - min_price + 1) + min_price);
	item_price_2 = (rand()%(max_price - min_price + 1) + min_price);
	item_price_3 = (rand()%(max_price - min_price + 1) + min_price);
	
	quantity_amount_1 = (rand()%(max_quantity - min_quantity + 1) + min_quantity);
	quantity_amount_2 = (rand()%(max_quantity - min_quantity + 1) + min_quantity);
	quantity_amount_3 = (rand()%(max_quantity - min_quantity + 1) + min_quantity);
	
	
	amount_1 = item_price_1 * quantity_amount_1;
	amount_2 = item_price_2 * quantity_amount_2;
	amount_3 = item_price_3 * quantity_amount_3;
	
	sub_total = amount_1 + amount_2 + amount_3;
	
	if (sub_total>1000)
	{
		discount =   (sub_total*10)/100;
	}
	
	net_total = sub_total - discount;
	
	cout << left << setw(10) << "Item" << left << setw(10) << "Price" << left << setw(10) << "quantity" << left << setw(8) << "Amount" << "\n";

	cout << left << setw(10) << "item_1" << left << setw(10) << item_price_1 << left << setw(10) << quantity_amount_1 << left << setw(8) << amount_1 << "\n";
    cout << left << setw(10) << "item_2" << left << setw(10) << item_price_2 << left << setw(10) << quantity_amount_2 << left << setw(8) << amount_2 << "\n";
    cout << left << setw(10) << "item_3" << left << setw(10) << item_price_3 << left << setw(10) << quantity_amount_3 << left << setw(8) << amount_3 << "\n";
	cout << left << setw(10) << "Subtotal"<< right << setw(24)  <<  sub_total        << "\n";
	cout << left << setw(10) << "Discount:"<< right << setw(24)  <<  discount        << "\n";
	cout << left << setw(10) << "Net Total:"<< right << setw(25)  <<  net_total        << "\n";
	
	
	
	
	
	
	
	
	
	
}