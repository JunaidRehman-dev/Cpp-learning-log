#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	// Initializations for days,month,year,leap year
	
   int days{};
   int month_number{};
   int year{};
   bool leap_year{};

   
   // Initialization for Long Format (Zeller's congruence)-----------> [h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7]
   
   int q{};       					// q is the day    
   int m{};       					//  m is the month (3 = March, 4 = April, ..., 12 = December; January and February are counted as months 13 and 14 of the previous year)
   int k{};      					//  k = year % 100
   int j{};      					//  j = year / 100 (all integer divisions).
   int year_Zellers{};  		    	//  in case we get a month number 13 and 14 then we will have to work with previous year i dont want to change the year vAariable initiazlized firstly
   string month_name_zellers{}; 	// dont want to mess up with my real month number which are stating from junauary = 1 in this case January = 13 
   int h{};                         // day of week
   string week_day{};
   
   //Initialization for quarter of year and seson of month.
   
   string quarter{};
   string season{};
   
   //Calualting no of days and no of days in ayear wherter it is a leap year or not
   
   int days_of_year{0};
   int total_days_in_year{};
   
   // Caluclating no of days remaning in the year and percentage % of year completed
   
   int remaining_days{};
   double year_completed{};
   
   //three integers in the format DD MM YYYY
   
   cout << "Enter date (DD MM YYYY): ";
   cin >>  days >> month_number >> year;
   
   
    //The month must be between 1 and 12
   
   if (month_number < 1 || month_number > 12)
   {
   	cout << "Error: Invalid  Month number , Month  number  must be 1 and 12 " << "\n";
   	return 0;
   }
    
    
     //The year must be between 1900 and 2100
   
   if (year < 1900 || year > 2100)
   {
   	cout << "Error: Invalid Year name , Year must be  between 1900 and 2100 " << "\n";
   	return 0;
   }
     
   
   // checking for leap year
   
   if ((year%4 == 0 && year%100 != 0 ) || (year%400 == 0))
   {
   	 leap_year = true;
   }
   
   else
   {
   	 leap_year = false;
   }
   
   // Checking for date validation
   
   switch (month_number)
   {
   	case 1 :                       //January
   		{
   			if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n ";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days (" << year << " is not a leap year)." << "\n";
		   		return 0;
			}
			
			break;	 	
   		 	
		}
		
	case 2 :                     //February
	    {
		
		    if (leap_year == false)
		    {
			
		   		if (days < 1)
		   		{
		   			cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   			return 0;
				}
				else if (days > 28)
				{
					cout << "Error: Day " << days << " is invalid ,  This month has only 28 days (" << year << " is not a leap year)." << "\n";
		   			return 0;
				}
		    } 
		    
		    else if (leap_year == true)
		    {
		    	if (days > 29)
				{
					cout << "Error: Day " << days << " is invalid ,  This month has only 29 days " << "\n";
		   			return 0;
				}
				else if (days < 1)
		   		{
		   			cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   			return 0;
				}
			}
			
			break;
			
	    }
	    
	case 3 :                      //March                   
   		{
	   		if (days < 1)
			{
			   	cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
			   	return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
			   	return 0;
			}
			
			break;		
		
		}
		
   	case 4 :                     //April                 
   		{
   			if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 30)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 30 days ." << "\n";
		   		return 0;
			}	
			
			break;	
		
		}
	
	case 5 :                      //May        
   		{
   			if (days < 1)
			{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
		   		return 0;
			}	
			
			break;
		
		}
	
	case 6 :                   //june                  
   		{
   		
		   if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 30)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 30 days ." << "\n";
		   		return 0;
			}	
			
			break;
		
		}
		
	case 7 :                 //july            
   		{
   			if (days < 1)
		 	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
		   		return 0;
			}	
			
			break;	
		
		}
		
	case 8 :               //august          
   		{
   			if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
		   		return 0;
			}	
			
			break;
   				
		}
		 
	case 9 :                 //september                     
   		{
   			if (days < 1)
		 	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 30)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 30 days ." << "\n";
		   		return 0;
			}
			
			break;	
		
		}
		
	case 10 :                 //october              
   		{
   			if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
		   		return 0;
			}
   			
			   break;	
		}
		
	case 11 :                //november      
   		{
   			if (days < 1)
		 	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 30)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 30 days ." << "\n";
		   		return 0;
			}
			
			break;		
		
		}
		
	case 12 :                 //december     
   		{
   			if (days < 1)
		   	{
		   		cout << "Error: Day " << days << " is invalid , The days of month cannot be less than 1 " << "\n";
		   		return 0;
			}
			else if (days > 31)
			{
				cout << "Error: Day " << days << " is invalid ,  This month has only 31 days ." << "\n";
		   		return 0;
			}
			
			break;	
		
		}
   
   
    }
    
    cout << "\n";
    cout << setfill('*') << setw(50)  << "\n";
    cout << setfill(' ');
    
    cout << left << setw(24) << "Numeric Format" <<  " : " << right  << setfill('0') << setw(2) << days << "/" << setfill('0') << setw(2) << month_number << "/" << setfill('0') << setw(2) << year << setfill(' ') << "\n" ;
    cout << left << setw(24) << "ISO format" <<  " : " << right  << setfill('0') << setw(2) << year << "-" << setfill('0') << setw(2) << month_number << "-" << setfill('0') << setw(2) << days << setfill(' ') << "\n" ;
    
    // Calculating day of the week using Zeller's congruence
    
    q = days;
    
    switch (month_number)
    {
      
	  case 1:
	  {
	    m = 13;
	    year_Zellers = year - 1 ;
	    month_name_zellers = "January";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	  case 2:
	  {
	    m = 14;
	    year_Zellers = year - 1 ;
	    month_name_zellers = "February";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
    	
      case 3:
	  {
	    m = 3;
	    year_Zellers = year  ;
	    month_name_zellers = "March";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	  case 4:
	  {
	    m = 4;
	    year_Zellers = year  ;
	    month_name_zellers = "April";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 5:
	  {
	    m = 5;
	    year_Zellers = year  ;
	    month_name_zellers = "May";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 6:
	  {
	    m = 6;
	    year_Zellers = year  ;
	    month_name_zellers = "June";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 7:
	  {
	    m = 7;
	    year_Zellers = year  ;
	    month_name_zellers = "July";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 8:
	  {
	    m = 8;
	    year_Zellers = year  ;
	    month_name_zellers = "August";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 9:
	  {
	    m = 9;
	    year_Zellers = year  ;
	    month_name_zellers = "September";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 10:
	  {
	    m = 10;
	    year_Zellers = year  ;
	    month_name_zellers = "October";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 11:
	  {
	    m = 11;
	    year_Zellers = year  ;
	    month_name_zellers = "November";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	  
	   case 12:
	  {
	    m = 12;
	    year_Zellers = year  ;
	    month_name_zellers = "December";
	    k = year_Zellers % 100 ;
	    j = year_Zellers / 100 ;
	  	h = ( q + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j ) % 7 ;
	  	
	  	break;
	  }	
	   		
    	
	}
	
	switch (h)
	{
		case 0:
			{
				week_day = "Saturday";
				break;
			}
		
		case 1:
			{
				week_day = "Sunday";
				break;
			}
			
		case 2:
			{
				week_day = "Monday";
				break;
			}
			
		case 3:
			{
				week_day = "Tuesday";
				break;
			}
			
		case 4:
			{
				week_day = "Wednesday";
				break;
			}
			
		case 5:
			{
				week_day = "Thursday";
				break;
			}
			
		case 6:
			{
				week_day = "Friday";
				break;
			}
			
		
								
		
	}
	
	cout << left << setw(24) << "Long Format" <<  " : "  << week_day << ", " << month_name_zellers << " " << setfill('0') << setw(2) << q << ", " << setfill(' ') << year << "\n" ;
	
	{
		if (leap_year == true)
		{
			cout << left << setw(24) << "Leap Year" <<  " : " << "Yes" << "\n" ;
		}
		else
		{
			cout << left << setw(24) << "Leap Year" <<  " : " << "No" << "\n" ;
		}
    }
	
	{
		if (week_day == "Saturday")
		{
			cout << left << setw(24) << "Weekend" <<  " : " << "Yes" << "\n" ;
		}
		else if (week_day == "Sunday")
		{
			cout << left << setw(24) << "Weekend" <<  " : " << "Yes" << "\n" ;
		}
		else
		{
			cout << left << setw(24) << "Weekend" <<  " : " << "No" << "\n" ;
		}
	}
	
	
	//Checking for quarter of month
	
	{
		if (month_name_zellers ==  "January" || month_name_zellers ==  "February" || month_name_zellers ==  "March" )
		{
			quarter = "Q1";
		}
		
		else if (month_name_zellers ==  "April" || month_name_zellers ==  "May" || month_name_zellers ==  "June" )
		{
			quarter = "Q2";
		}
		
		else if (month_name_zellers ==  "July" || month_name_zellers ==  "August" || month_name_zellers ==  "September" )
		{
			quarter = "Q3";
		}
		else if (month_name_zellers ==  "October" || month_name_zellers ==  "November" || month_name_zellers ==  "December" )
		{
			quarter = "Q4";
		}
		
    }
	
	//Checking for quarter of season of month	
	
	
	{
		if (month_name_zellers ==  "January" || month_name_zellers ==  "February" || month_name_zellers ==  "December" )
		{
			season = "Winter";
		}
		
		else if (month_name_zellers ==  "April" || month_name_zellers ==  "March"  )
		{
			season = "Spring";
		}
		
		else if (month_name_zellers ==  "July" || month_name_zellers ==  "August" || month_name_zellers ==  "September" || month_name_zellers ==  "June" || month_name_zellers ==  "May" )
		{
			season = "Summer";
		}
		else if (month_name_zellers ==  "October" || month_name_zellers ==  "November" )
		{
			season = "Autumn";
		}
		
    }	
    
    
    cout << left << setw(24) << "Quarter / Season" <<  " : "  << quarter << " / " << season << "\n" ;
    
    //Calculting day of the year 
    
    days_of_year = days;
    
    switch (month_number - 1)
    
    {
    		
    	case 12 :                                 	// December
    		{
    			days_of_year = days_of_year + 31;
			}   
    	
    	case 11 :                                 	// november
    		{
    			days_of_year = days_of_year + 30;
			}   
		case 10 :                                	// October
    		{  
    			days_of_year = days_of_year + 31;
			}
		case 9 :                                 	//September
    		{
    			days_of_year = days_of_year + 30;
			}
		case 8 :                                 	//August
    		{
    			days_of_year = days_of_year + 31;
			}
		case 7 :                                 	//July
    		{
    			days_of_year = days_of_year + 31;
			}
		case 6 :                                 	//June
    		{
    			days_of_year = days_of_year + 30;
			}
		case 5 :                                 	//May
    		{
    			days_of_year = days_of_year + 31;
			}
		case 4 :                                 	//April
    		{
    			days_of_year = days_of_year + 30;
			}
		case 3 :                                  	//March
    		{
    			days_of_year = days_of_year + 31;
			}
		case 2 :                                  	//February
    		{
    			if(leap_year == true)
    			{								
    			days_of_year = days_of_year + 29;
    		    }
    		    else
    		    {
    		    days_of_year = days_of_year + 28;
				}
			}
		case 1 :                                   	//January
    		{
    			days_of_year = days_of_year + 31;
			}
		
	}
	
	if (leap_year == true)
	{
		total_days_in_year = 366;
	}
	else if (leap_year == false)
	{
		total_days_in_year = 365;
	}
	
	
	cout << left << setw(24) << "Day of Year" <<  " : "  << days_of_year << " of " << total_days_in_year << "\n" ;
	
	 // Caluclating no of days remaning in the year
	 
	remaining_days = total_days_in_year - days_of_year;
	
	cout << left << setw(24) << "Days Remaining" <<  " : "  << remaining_days << "\n" ;
	
	
	//Calculating percentage % of year completed
	
	year_completed = (days_of_year *100 ) / static_cast<double>(total_days_in_year) ;
	
	cout << fixed << setprecision(2);
	cout << left << setw(24) << "Year Completed" <<  " : "  << year_completed << "%" << "\n" ;
	
	cout << setfill('*') << setw(50)  << "\n";
    cout << setfill(' ');
	
	
    
		
		
		
		
	
	
	
	
	
    
    
    
   
   
   
}