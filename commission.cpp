//another sentinel comission 
#include <iostream>
using namespace std;
int main()
{
	float sales, commission;
	
	cout <<"This program is used for computing a saesperson's comission. \n\n";
	cout <<"Enter the salesperson's sales amount: ";
	cin >> sales;
	cout <<"\n";
	
	//pretest loop using sentinel value
	while(sales > 0)
	{ 
	   commission = sales * 0.12;
	   cout <<"The salesperson's commission is: " <<commission;
	   cout << endl << endl;
	   cout <<"Enter the another sales[0 to exit]: ";  // update read
	   cin >> sales; // sentinetl value for the update read
	}
	
	cout <<"\nHAVE A NICE DAY ^__^";
	return 0;
	

	
}
