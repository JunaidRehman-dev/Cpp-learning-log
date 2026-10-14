#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{   
    int dice1{};
    int dice2{};
    int dice3{};
    int max = 6 ;
	int min = 1 ; 
    
	srand(time(0));
	dice1 = (rand()%(max - min +1) - min);
	dice2 = (rand()%(max - min +1) - min);
	dice3 = (rand()%(max - min +1) - min);
	
	cout << "roll 1: " << dice1 << "\n";
	cout << "roll 2: " << dice2 << "\n";
	cout << "roll 3: " << dice3 << "\n";
	cout << "Total: "  << dice1 + dice2 + dice3;
}