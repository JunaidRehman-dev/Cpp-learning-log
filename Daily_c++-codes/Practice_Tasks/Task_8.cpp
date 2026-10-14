#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std ;

int main()
{
	int num1{};
	int num2{};
	int num3{};
	int num4{};
	int num5{};
	int num6{};
	int max{20};
	int min{1};
	int operator_1_num{};
	int operator_2_num{};
	int operator_3_num{};
	char operator_1{};
	char operator_2{};
	char operator_3{};
	int answer_1{};
	int answer_2{};
	int answer_3{};
	int correct_answer_1{};
	int correct_answer_2{};
	int correct_answer_3{};
	int count{0};
	double percentage{};
	char grade{};

	
	
	srand(time(0));
	
	num1=(rand()%(max-min+1)+min);
	num2=(rand()%(max-min+1)+min);
	num3=(rand()%(max-min+1)+min);
	num4=(rand()%(max-min+1)+min);
	num5=(rand()%(max-min+1)+min);
	num6=(rand()%(max-min+1)+min);
	
	
	operator_1_num = (rand()%(4)+1);
	operator_2_num = (rand()%(4)+1);
	operator_3_num = (rand()%(4)+1);
	
	operator_1 = (operator_1_num==1)?'*'
	             :(operator_1_num==2)?'-'
	             :(operator_1_num==3)?'+'
	             :(operator_1_num==4)?'/'
	             :'$';
	             
	operator_2 = (operator_2_num==1)?'*'
	             :(operator_2_num==2)?'-'
	             :(operator_2_num==3)?'+'
	             :(operator_2_num==4)?'/'
	             :'$';
	             
	operator_3 = (operator_3_num==1)?'*'
	             :(operator_3_num==2)?'-'
	             :(operator_3_num==3)?'+'
	             :(operator_3_num==4)?'/'
	             :'$';
	             
	
	cout << "Q1: " << num1 << " " << operator_1 << " " << num2 << " = ";
	cin >> answer_1; 
	
	if (operator_1 == '+')
	{
		correct_answer_1 = num1 + num2 ;
	}
	else if (operator_1 == '-')
	{
		correct_answer_1 = num1 - num2 ;
	}
	else if (operator_1 == '/')
	{
		correct_answer_1 = num1 / num2 ;
	}
	else if (operator_1 == '*')
	{
		correct_answer_1 = num1 * num2 ;
	}
	
	if (answer_1 == correct_answer_1 )
	{
		count = count + 1;
		cout << "Correct!\n";	
	}
	else
	{
		cout << "Wrong! Answer is " << correct_answer_1 << "\n" ;
	}
	
	
	
	
	
	cout << "Q2: " << num3 << " " << operator_2 << " " << num4 << " = ";
	cin >> answer_2;
	
	if (operator_2 == '+')
	{
		correct_answer_2 = num3 + num4 ;
	}
	else if (operator_2 == '-')
	{
		correct_answer_2 = num3 - num4 ;
	}
	else if (operator_2 == '/')
	{
		correct_answer_2 = num3 / num4 ;
	}
	else if (operator_2 == '*')
	{
		correct_answer_2 = num3 * num4 ;
	}
	
	if (answer_2 == correct_answer_2 )
	{
		count = count + 1;
		cout << "Correct!\n";	
	}
	else
	{
		cout << "Wrong! Answer is " << correct_answer_2 << "\n" ;
	}
	
	
	cout << "Q3: " << num5 << " " << operator_3 << " " << num6 << " = ";
	cin >> answer_3;
	
	if (operator_3 == '+')
	{
		correct_answer_3 = num5 + num6 ;
	}
	else if (operator_3 == '-')
	{
		correct_answer_3 = num5 - num6 ;
	}
	else if (operator_3 == '/')
	{
		correct_answer_3 = num5 / num6 ;
	}
	else if (operator_3 == '*')
	{
		correct_answer_3 = num5 * num6 ;
	}
	
	if (answer_3 == correct_answer_3 )
	{
		count = count + 1;
		cout << "Correct!\n";	
	}
	else
	{
		cout << "Wrong! Answer is " << correct_answer_3 << "\n";
	}
	
	cout << "Score: " << count << "/3" << "\n";
	
	percentage = (count/3.0)*100;
	
   
   cout << fixed << setprecision(1);
   cout << "Percentage: " << percentage << "%" << "\n";
   
   grade = (percentage>=80)?'A'
          : (percentage>=60)?'B'
          :(percentage>=40)?'C'
          :'F';
          
   cout << "Grade: " << grade;
	           
	             
	
	
	
}