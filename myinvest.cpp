#include<iostream>
using namespace std;
int main()
{
	float number;
	cout <<"Input a number (1,2,3,4): ";
	cin>> number;
	
	
	while(number <= 3 )
     {
	   cout <<"Goodjob!";
	   cout <<"\nInput another number again (1,2,3,4): ";
	   cin >> number;
	   
	   
	
	 }
		 if ( number>=5)
	 while(number > 4 )
	  {
	  
		cout << "Error";

		cout <<"\nInput the number again: ";
		cin >> number; 
	  }

	return 0;
}
