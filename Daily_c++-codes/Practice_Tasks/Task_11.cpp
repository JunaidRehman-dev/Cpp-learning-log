#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	
	int user_choice{};
	int computer_choice{};
	int max{3};
	int min{1};
	bool userwins{}; 
	
	cout << "Enter your choice (1-Rock 2-Paper 3-Scissors): ";
	cin >> user_choice;
	
	cout << "You chose: " << user_choice << "\n";
	
	computer_choice = (rand()%(max-min+1)+min);
	cout << "Computer chose: " << computer_choice << "\n";
	
	userwins = (user_choice == 1 && computer_choice == 3) ||
	           (user_choice == 2 && computer_choice == 1) ||
	           (user_choice == 3 && computer_choice == 2) ;
	           
	if (user_choice == computer_choice )
	{
		cout <<"It is a draw, Play again!\n";
		
	}
	
	if (userwins )
	{
		cout <<"You win this round!" << "\n";
		
	}
	
	else
	{
		cout <<"You do not win this round" << "\n";
	}
	
}