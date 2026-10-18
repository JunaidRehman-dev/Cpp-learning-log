#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	long long user_number{};                                                           //Declaring all temporary variables for different loops and calculations
	long long temp_for_counting{};
	long long temp_for_adding{};
	long long temp_for_largest{};
	long long temp_for_reversing{};
	long long right_most_digit{};
	long long Total_number_of_digits{};
	bool keep_counting_1{true};                                                         //setting it to true until we get to the last 1 or 2 digits.
	bool keep_counting_2{true}; 
	bool keep_counting_3{true};
	bool keep_counting_4{true};
	long long Sum_of_all_digits{0};
	long long largest_number{};    
	long long temp_right_most_digit{}; 
	long long reversed_number{0}; 
	bool  is_Palindrome{true} ; 
	                      
	
	
	cout << "Enter a positive integer: ";
	cin >> user_number;
	
	// using a  while loop to take a valid input
	while(user_number <= 0)                                                           //setting the codition to keep asking for input 
	{                                                                                 //until the user input is greater than 0.
		cout << "Invalid input! Enter a positive integer: ";
		cin >> user_number;
	}                                                          
	                                                                                  

    
    //Calculating Total number of digits
    
	temp_for_counting = user_number;                                       
	
	while (keep_counting_1)
	{	
	   right_most_digit = temp_for_counting % 10;                                      //getting the remainder
	   temp_for_counting = temp_for_counting / 10;                                     //updating the value of "temp_for_counting" after teh right most digit was omitted.
	   Total_number_of_digits = Total_number_of_digits + 1;
	
	   if (temp_for_counting == 0)                                     
	   {                                                               
		                                                                                // If temp drops to 0, there are no more digits left to count
		   keep_counting_1 = false;
	   }
	  
	
	   else if (temp_for_counting > 0)                                 
	   {                                                               
		                                                                                // If temp is greater than 0, there are still digits left
		   keep_counting_1 = true;
	   }	    
		  
		    
    }
    
    
    
    
    //Calculating Total sum of nhmbers.
    
    temp_for_adding = user_number;
    
    while (keep_counting_2)
    {
    	right_most_digit = temp_for_adding % 10;                                      
	    temp_for_adding = temp_for_adding / 10;
		Sum_of_all_digits = Sum_of_all_digits + right_most_digit;
		
		                                                                               
		if (temp_for_adding == 0)                                                     
		{                                                                           
			keep_counting_2 = false;
		}
		else if (temp_for_adding > 0)                                                  
		{                                                                             
			keep_counting_2 = true;
		}
	}
	
	
	temp_for_largest = user_number;
	
	do 
	{
	
		temp_right_most_digit = temp_for_largest % 10;
		temp_for_largest = temp_for_largest / 10;
		right_most_digit = temp_for_largest % 10;
		if (right_most_digit > temp_right_most_digit)                                
		   {
			largest_number = right_most_digit;
			
		   }
		else if (right_most_digit < temp_right_most_digit)
		   {
			largest_number = temp_right_most_digit;
			
		   }
    }while (right_most_digit == temp_right_most_digit);
    
    while(keep_counting_3)
    {
    	right_most_digit = temp_for_largest % 10;
    	temp_for_largest = temp_for_largest / 10;
    	
    	if (right_most_digit > largest_number )
		   {
				largest_number = right_most_digit;
				if (temp_for_largest < 10 )
			   {
			   	 
				   	if (temp_for_largest > largest_number)
				   	{
					
					    largest_number = temp_for_largest ;
					    keep_counting_3 = false;
				    }
				
					else
					{
					   largest_number = largest_number;
					   keep_counting_3 = false;
					}
			   }
		   }
		else if (temp_for_largest == 10 )
		   {
			largest_number = largest_number ;
			keep_counting_3 = false;                                                                       //Setting up variable to start reversing the number
			
		   }
		   
		else if (temp_for_largest < 10 )                                                                  //Converting the first right most digit into a string
		   {
		   	 
			   	if (temp_for_largest > largest_number)
			   	{
				
				    largest_number = temp_for_largest ;
				    keep_counting_3 = false;
			    }
			
				else
				{
				   largest_number = largest_number;
				   keep_counting_3 = false;
				}
			
			
        	}		   
	   
	}
	
	temp_for_reversing = user_number;
	
	while (keep_counting_4)
	{	
	   right_most_digit = temp_for_reversing % 10;                                                                         
	   temp_for_reversing = temp_for_reversing / 10;                                                                      
	   
	   
	   reversed_number = (reversed_number * 10) + right_most_digit;
	
	   if (temp_for_reversing == 0)                                      
	   {                                                                 
		   keep_counting_4 = false;
	   }
	   else if (temp_for_reversing > 0)                                  
	   {                                                                 
		   keep_counting_4 = true;
	   }	    
    }
    
                                                                    
    
   if (reversed_number == user_number )                                                                                     
    {
        is_Palindrome = true;
    }
    else
    {
        is_Palindrome = false;	
    }
	
	
	cout << "\n";
	cout <<"----- Digit Report ----- " << "\n";
	cout << left << setw(25) << "Number" << ": " << user_number << "\n";
	cout << left << setw(25) << "Total digits" << ": " << Total_number_of_digits << "\n";
	cout << left << setw(25) << "Sum of digits" << ": " << Sum_of_all_digits << "\n";
	cout << left << setw(25) << "Largest Digit" << ": " << largest_number << "\n";
	cout << left << setw(25) << "Reversed Number" << ": " << reversed_number << "\n";
	cout << left << setw(25) << "Palindrome" << ": ";
	if (is_Palindrome == true) 
	{
	    cout << "Yes" << "\n";
	} 
	else 
	{
	    cout << "No" << "\n";
	}
	
	
	
}