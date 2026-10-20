//Name: Junaid Rehman
//roll_number: i263106
//section: SE-C
//Assignment 2 ---- Question 1



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	srand(time(0));
	
	int Consumer_ID{};
	int max_Consumer_ID{99999};
	int min_Consumer_ID{10000};
	char Connection_Type{};                                                              //this "Connection_Type" is being used for checking in switch statemnet as you cannot check strings in switches
	string  connection_Type{};                                                          //this "connection_Type" is being used for storing and outputting the current connection type
	int month_number{};
	string billing_month_name{};
	string billing_month_season{};
	double  current_reading{};
	double  previous_reading{};
	double units_consumed{};
	double  energy_charges{};
	double extra_peak_surcharge{};
	double protected_subsidy{0.0};
	double Fuel_Price_Adjustment{};
	int random_FPA_number{}; 
	double Fuel_Price_Adjustment_Rate{};
	double meter_rent{};
	double GST{};
	double taxable_base{};
	double TV_Fee{};
	double total{};
	int Payable_Within_Due_Date{};
	int Payable_After_Due_Date{};
	int gst_rate{};

	Consumer_ID = (rand()%(max_Consumer_ID - min_Consumer_ID + 1 ) + min_Consumer_ID);
	cout << "Enter Consumer ID (5 digits): " << Consumer_ID << "\n";
	
	cout << "Enter Connection Type (R/C/I): " ;
	cin >>  Connection_Type;
	
	switch (Connection_Type)
	{
		case 'R':
			{
				connection_Type = "Residential";
				break;
			}
		case 'C':
			{
				connection_Type = "Commercial";
				break;
			}
		case 'I':
			{
				connection_Type = "Industrial";
				break;
			}
		case 'r':
			{
				connection_Type = "Residential";
				break;
			}
		case 'c':
			{
				connection_Type = "Commercial";
				break;
			}
		case 'i':
			{
				connection_Type = "Industrial";
				break;
			}
		
		default:
		{
			cout << " Invalid Connecion type";
		    return 0;	
		}
	}
		 

															// use a switch statement to get the month name. May to 
															//September are Summer months; all other months are Winter months.
   	
   cout << "Enter Billing Month (1-12): " ;
   cin >> month_number;
   
   switch (month_number)
   {
		case 1:                                  			//january (winter)
			{
				billing_month_name = "January";
				billing_month_season = "Winter";
				break;
			}
		case 2:                                				 //februrary (winter)
			{
				billing_month_name = "February";
				billing_month_season = "Winter";
				break;
			}
		case 3:                               				 //march (winter)
			{
				billing_month_name = "March";
				billing_month_season = "Winter";
				break;
			}
		case 4:                               				 //april (winter)
			{
				billing_month_name = "April";
				billing_month_season = "Winter";
				break;
			}
		case 5:                               				//may (summer)
			{
				billing_month_name = "May";
				billing_month_season = "Summer";
				break;
			}
		case 6:                              				 //june (summer)
			{
				billing_month_name = "June";
				billing_month_season = "Summer";
				break;
			}
		case 7:                              				 //july (summer)
			{
				billing_month_name = "July";
				billing_month_season = "Summer";
				break;
			}
		case 8:                              				//august (summer)
			{
				billing_month_name = "August";
				billing_month_season = "Summer";
				break;
			}
		case 9:                           					 //september (summer)
			{
				billing_month_name = "September";
				billing_month_season = "Summer";
				break;
			}
		case 10:                        					 //october (winter)
			{
				billing_month_name = "October";
				billing_month_season = "Winter";
				break;
			}
		case 11:                         					//november (winter)
			{
				billing_month_name = "November";
				billing_month_season = "Winter";
				break;
			}
		case 12:                        					// december (winter)
			{
				billing_month_name = "December";
				billing_month_season = "Winter";
				break;
			}
		default:
		    {
		    	cout << "Invalid Month number";
		    	return 0;
			    break;	
		    }
	}
	
	
	cout << "Enter Previous Reading: ";                    //inputing the Previous Reading
	cin >> previous_reading;                     
	
	cout << "Enter Current Reading: ";                     ////inputing the current Reading
	cin >> current_reading;
	
															// The previous reading cannot be 
														    //negative and the current reading cannot
															// be less than the previous reading. 
															
	
	if (previous_reading < 0)                              //validating the previous reading and current reading
	{
		cout << "Invalid previous reading , The previous reading was a negative number" << "\n";
		return 0;
	}
	else if (current_reading < previous_reading)
	{
		cout << "Invalid current reading , The current reading was lesser than the previous reading" << "\n";
		return 0;
	}
	
	//Calculating units consumed
	units_consumed =  current_reading - previous_reading  ; 
	
	cout << "\n";
	cout << "\n";
	
	cout << setfill('=') << setw(50) << "" << "\n";
	cout << setfill(' ') << setw(35) << right << "ELECTRICITY BILL" << setw(15) << "" << "\n";
	cout << setfill('=') << setw(50) << "" << "\n";
	cout << setfill(' ');
	
	
    cout << left << setw(30) << "Consumer ID" << right << setw(20) << Consumer_ID << "\n";
	cout << left << setw(30) << "Connection Type" << right << setw(20) << connection_Type << "\n";
	cout << left << setw(30) << "Billing Month" << right << setw(20) << billing_month_name << "\n";
	cout << left << setw(30) << "Season" << right << setw(20) << billing_month_season << "\n";
	cout << left << setw(30) << "Units Consumed" << right << setw(20) << units_consumed << "\n";
	
	
	// Calculating energy charges by a slab commulative method
	// first 100 units @ Rs. 10,
	// units 101 to 200 @ Rs. 15, 
    //units 201 to 300 @ Rs. 22,
	// above 300 @ Rs. 30
	
	if (connection_Type == "Residential")
	{
		if(units_consumed <= 100 )
		{
			energy_charges = units_consumed * 10.0 ;
			protected_subsidy  = (energy_charges * 25)/100.0 ;
		}
		else if (units_consumed <= 200)
		{
			energy_charges = (100 * 10.0) + ((units_consumed - 100) * 15.0) ;
		}
		else if (units_consumed <= 300)
		{
			energy_charges = (100 * 10.0) + ( 100 * 15.0) + ((units_consumed - 200) * 22.0) ;
		}
		else if (units_consumed > 300)
		{
			energy_charges = (100 * 10.0) + ( 100 * 15.0) + (100 * 22.0) + ((units_consumed - 300) * 30.0) ;
		}
		
	}
	
	else if (connection_Type == "Commercial")
	{
	  energy_charges = units_consumed * 35.0 ;
	
	  if (billing_month_season == "Summer" )
	  {
	  	extra_peak_surcharge = units_consumed * 2.0 ;
	  	energy_charges = energy_charges + extra_peak_surcharge;
	  }
		
	}
	
	else if (connection_Type == "Industrial")
	{
	  if (units_consumed <= 1000)
	  {
	  	energy_charges = units_consumed * 28.0 ;
	  }
	  else
	  {
	  	energy_charges = units_consumed * 25.0 ;
	  }
		
	}
	
	// Calculating Fuel Price Adjustment (FPA)
	
	/* Here the FPA rate per unit is randomly generated between 
	Rs. 1.50 and Rs. 3.50 (both inclusive) with exactly two decimal places. Then Generating a 
	random integer and converting it with type casting; because  integer division will not give the 
	correct answer. FPA = units * FPA rate.*/ 

	random_FPA_number = (rand()%(350 - 150 + 1 ) + 150);
	Fuel_Price_Adjustment_Rate = static_cast<double>(random_FPA_number)/100.0;
	Fuel_Price_Adjustment = units_consumed * Fuel_Price_Adjustment_Rate;
	
	
	//Calculating Meter Rent
	/* Residential Rs. 50,
	 Commercial Rs. 300,
	  Industrial Rs. 2000. 
	*/
	
	if (connection_Type == "Residential")
	{
		meter_rent = 50.00	;
	}
	
	else if (connection_Type == "Commercial")
	{
	  meter_rent = 300.00;	
	}
	
	else if (connection_Type == "Industrial")
	{
	  meter_rent = 2000.00;		
	}
	
	//Calculating GST
	/*GST is charged on (energy charges - subsidy + FPA + meter rent): 5% for residential 
	consumers using 200 units or less, 15% for industrial consumers, and 17% for everyone 
	else. 	
	*/
	
	taxable_base = energy_charges - protected_subsidy + Fuel_Price_Adjustment + meter_rent;
	
	if (connection_Type == "Residential")
	{
		if (units_consumed <= 200)
		{
			GST = (taxable_base*5.0)/100.0;
			gst_rate = 5;
		}
		else
		{   
		    GST = (taxable_base*17.0)/100.0;
			gst_rate = 17;
		}
	}
	
	else if (connection_Type == "Industrial")
	{
	  GST = (taxable_base*15.0)/100.0;
	  gst_rate = 15;		
	}
	else
	{
		GST = (taxable_base*17.0)/100.0;
		gst_rate = 17;
	}
	
	// Calculating TV Fee
	/*Rs. 35 for residential and commercial connections
	 no TV fee for industrial connections.
    */
	
	if (connection_Type == "Residential")
	{
		TV_Fee = 35.0	;
	}
	
	else if (connection_Type == "Commercial")
	{
	  TV_Fee = 35.0;	
	}
	
	else if (connection_Type == "Industrial")
	{
	  TV_Fee = 00.00;		
	}
	

	
	total = (energy_charges - protected_subsidy + Fuel_Price_Adjustment + meter_rent) + GST + TV_Fee;
	
	Payable_Within_Due_Date = static_cast<int>(round(total));
	
	Payable_After_Due_Date = total + ((energy_charges - protected_subsidy)*10.0)/100.0;
	Payable_After_Due_Date = static_cast<int>(round(Payable_After_Due_Date)); 
		
	cout << setfill('-') << setw(50) << "" << "\n";
	cout << setfill(' ');
	
	cout << fixed << setprecision(2);
	cout << left << setw(30) << "Energy Charges" << right << setw(20) << energy_charges << "\n";
	cout << left << setw(30) << "Protected Subsidy (25%)" << right << setw(20)  << -protected_subsidy << "\n";
	cout << left << setw(30) << "FPA Rate (per unit)" << right << setw(20) << Fuel_Price_Adjustment_Rate << "\n";
	cout << left << setw(30) << "Fuel Price Adjustment" << right << setw(20) << Fuel_Price_Adjustment << "\n";
	cout << left << setw(30) << "Meter Rent " << right << setw(20) << meter_rent << "\n";
	cout << left << setw(30) << ("GST (" + to_string(gst_rate) + "%)") << right << setw(20) << GST << "\n";
	cout << left << setw(30) << "TV Fee" << right << setw(20) << TV_Fee << "\n";
	
	cout << setfill('-') << setw(50) << "" << "\n";
	cout << setfill(' ');
	
	cout << left << setw(30) << "Total (exact)" << right << setw(20) << total << "\n";
	cout << left << setw(30) << "Payable Within Due Date" << right << setw(20) << Payable_Within_Due_Date << "\n";
	cout << left << setw(30) << "Payable After Due Date " << right << setw(20) << Payable_After_Due_Date << "\n";
	
	cout << setfill('=') << setw(50) << "" << "\n";
	cout << setfill(' ');
    
	
	
	
              
	
	
	
}