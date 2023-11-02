//sentinel.cpp
#include<iostream>
using namespace std;
int main()
{
	float first, second, sum, difference, product;
	int operation;
	char choice;
	
	cout <<"This program is used to perform mathematical operation of two numbers..\n\n";

	
	do{	
		cout <<"Enter the first number: ";
		cin >> first;
		cout << endl;
		
		cout <<"Enter the second number: ";
		cin >> second;
		cout << endl;

		
		cout <<"\nPlease select the number for the desired operation: \n";
		cout <<"1 - for addition \n";
		cout <<"2 - for subtraction \n";
		cout <<"3 - for multiplaction \n";
		cout <<"0 - to exit";
		cout <<endl;
		cin >> operation;
		cout <<" \n\n";
		
		switch(operation)
		{
			case 1:
				sum = first and second;
				cout <<"The sum of " << first <<" and " << second <<" is " << sum <<endl;
				break;
				
			case 2:
				difference = first - second;
				cout <<"The difference of " << first << " and " << second <<" is " << difference << endl;
				break;
				
			case 3:
				product = first * second;
				cout <<"The product of " << first <<" and " << second <<" is " << product << endl;
				
				break;
				
			default:
				
				break;
				
 		}//end swtich
 		 
 		 cout <<"\nAgain? [Y/N]: ";
 		 cin >> choice;
 		 cout <<endl;
	}
		while(toupper(choice) == 'Y');
	
		return 0;
}
