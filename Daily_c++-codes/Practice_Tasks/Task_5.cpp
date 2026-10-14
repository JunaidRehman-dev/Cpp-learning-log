#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	
	srand(time(0));
	
	int person1_die_1{};
	int person1_die_2{};
	
	int person2_die_1{};
	int person2_die_2{};
	
	int max{6};
	int min{1};
	
	int score_1{};
	int score_2{};
	int bonus_1{0};
	int bonus_2{0};
	
	float percentage_1{};
	float percentage_2{};
	
	
	person1_die_1 = (rand()%(max-min+1)+min);
	person1_die_2 = (rand()%(max-min+1)+min);
	
	person2_die_1 = (rand()%(max-min+1)+min);
	person2_die_2 = (rand()%(max-min+1)+min);
	
	if (person1_die_1 == person1_die_2)
	{
		bonus_1 = 5;
	}
	
	score_1 = person1_die_1 + person1_die_2 + bonus_1 ; 
	percentage_1 = (score_1/17.0)*100;
	
	if (person2_die_1 == person2_die_2)
	{
		bonus_2 = 5;
	}
	
	score_2 = person2_die_1 + person2_die_2 + bonus_2 ; 
	percentage_2 = (score_2/17.0)*100;
	
	cout << left << setw(10) << "Player" << left << setw(10) << "Die 1" << left << setw(10) << "Die 2" << left << setw(10) << "Bonus" << left << setw(10) << "Score" << left << setw(10) << "Percent" << "\n";
	cout << left << setw(10) << "Player 1" << left << setw(10) << person1_die_1 << left << setw(10) << person1_die_2 << left << setw(10) << bonus_1 << left << setw(10) << score_1 << left << setw(10) << percentage_1 << "\n" ;
	cout << left << setw(10) << "Player 2" << left << setw(10) << person2_die_2 << left << setw(10) << person2_die_2 << left << setw(10) << bonus_2 << left << setw(10) << score_2 << left << setw(10) << percentage_2 << "\n" ;
	
	if (score_1 > score_2)
	{
	   cout << "Result: Player 1 Wins";
	}	
	
	else if (score_1 < score_2)
	{
	   cout << "Result: Player 2 Wins";
	}
	
	else 
	{
		cout << "Draw";
	}	
	
	
	
}