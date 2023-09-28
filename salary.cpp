#include<iostream>
using namespace std;
float overtime(float, float, float, float, float);
int main()
{	
	float prhr,regularhr, overtimehr, weekslry, otsalary;
	cout << "Enter your hourly pay rate: ";
	cin >> prhr;
	cout << "\nEnter regular hours worked: ";
	cin >> regularhr;
	cout << "\nEnter overtime hours worked: ";
	cin >> overtimehr;
	weekslry= prhr* regularhr;
	cout << "\n\nWeekly Salary: ";
	cout << weekslry;
	
	otsalary = (regularhr* prhr)+ (overtimehr* 1.5*prhr);
	cout << "\nWeekly Salary with overtime pay : " << otsalary;
	
return 0;
}

float overtime (float, float, float, float, float)
{
	float prhr,regularhr, overtimehr, weeks, otsalary;
	otsalary = (regularhr* prhr)+ (overtimehr* 1.5*prhr);
	
	return otsalary;
	

}
