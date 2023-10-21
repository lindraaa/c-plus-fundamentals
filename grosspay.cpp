#include<iostream>
using namespace std;
int main()
{
	
	float hours, rate, gross;
	
	cout <<"Please enter the no. of hours worked for the week:";
	cin >> hours;
	
	cout << "\nEnter the hourly rate:";
	cin >> rate;
	
	gross = hours * rate;
	
	
	if(hours > 40)       // true path//
	{
	 gross = gross + (hours - 40) * rate / 2;
	 cout << "\nYour gross pay with overtime is :" << gross;
    }
 	else                 //False path/
	cout <<"\nThank you";
	cout <<"\nBye";

	
	cout << "\nThe gross pay for the employee is :" << gross ;
	return 0;
}
