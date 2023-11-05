#include<iostream>
#include<cmath> // this library is needed to be able to use the pow function
using namespace std;
int main()
{
	double cube = 0.0;
	double base, exp;
	
	//pow is a built in function
	cube = pow(4.0, 3); //pow is one example of a function
	cout << cube <<endl <<endl;
	
	cout <<"The task used to input the basse and the exponent : \n";
	cout <<"Enter the base value: ",
	cin >> base;  
	
	cout <<"\nEnter the exponent value: ";
	cin >> exp;
	cout <<"The answer is: " << pow(base,exp) <<endl;
	return 0;

}
