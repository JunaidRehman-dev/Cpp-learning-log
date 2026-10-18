#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long long starting_number{};
	long long ending_number{};
	long long current_number{};
	long long new_sequence_number{};
	long long steps{0};
	long long largest_number{};
	double average_value{};
	double average_steps{0};
	int Total_numbers{};
	int longest_sequence_number{};
	long long longest_sequence_steps{};
	
	
	cout << "Enter starting number (>= 1): ";
	cin >> starting_number;
		
	cout << "Enter ending number (> starting number): ";
	cin >> ending_number;
	
	do
	{
		if (starting_number < 1 || ending_number <= starting_number)
		  {
			cout << "Invalid range! Please try again." << "\n";
			
			cout <<"\n";
			cout << "Enter starting number (>= 1): ";
			cin >> starting_number;
		
			cout << "Enter ending number (> starting number): ";
			cin >> ending_number;
	      }				
	} while(starting_number < 1 || ending_number <= starting_number);
	
	Total_numbers = (ending_number - starting_number) + 1 ;
	
	cout << "\n";
	cout << "\n";
	cout << left << setw(10) << "Number" << right << setw(8) << "Steps" <<  right << setw(10) << "Peak" << fixed << setprecision (2) << right << setw(12) << " Avg Value" << "\n";
	cout << "-------------------------------------------------------------------------------" << "\n";
	
	longest_sequence_number = starting_number;
	longest_sequence_steps  = steps;
	
	while(starting_number <= ending_number)
	{
	    current_number = starting_number;
	    new_sequence_number = current_number;
	    largest_number = current_number;
	    average_value = current_number;
	    
	    
	    steps = 0;
	    
	    
	    
	    while(new_sequence_number != 1)
	    {
	    	{
			
		    	if (new_sequence_number%2 == 0)
		    	{
		    		new_sequence_number = new_sequence_number / 2;
				}
				else if (new_sequence_number%2 == 1)
				{
					new_sequence_number = (new_sequence_number * 3) + 1;
				}
		    }
			
			{			
			    if (new_sequence_number > largest_number)
			    {
			    	largest_number = new_sequence_number;
				}		
		    }
		    
		    average_value = average_value + new_sequence_number;
			
			steps = steps + 1;
			
			
			
			
     	}
     	
     	
		
		average_value = (average_value)/(steps+1);
		average_steps = average_steps + steps;
		
		{
			if(steps > longest_sequence_steps )
			{
				longest_sequence_steps = steps;
				longest_sequence_number = current_number;
			}
			
			else if (steps == longest_sequence_steps)
			{
				longest_sequence_steps = steps;
				if(longest_sequence_number < current_number)
				{
					longest_sequence_number = longest_sequence_number;
				}
				else
				{
					longest_sequence_number = current_number;
				}
			}
			
		 } 
		
		starting_number = starting_number + 1;
		
		
		
		cout << left << setw(10) << current_number << right << setw(8) << steps <<  right << setw(10) << largest_number << fixed << setprecision (2) << right << setw(12) << average_value << "\n";
			 
	  	
    }
    
    average_steps = average_steps / Total_numbers;
    cout << "-------------------------------------------------------------------------------" << "\n";
    cout << left << setw(20) << "Longest sequence" <<" : " << fixed << setprecision(2) << longest_sequence_number << " " << "(" << longest_sequence_steps << " steps)" << "\n";
    cout << left << setw(20) << "Average steps"    <<" : "    << fixed << setprecision(2) << average_steps << "\n";
    
    
    
    
}