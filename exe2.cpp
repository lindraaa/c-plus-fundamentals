#include <iostream>
using namespace std;
int main()
{
	float firstnum, secnum, thirdnum, fourthnum, fifthnum, sixnum, seventhnum, eightnum, sumoffournumbers, productoftwonumbers, totalall, averagenumber;
    cout <<"+++++++++++++++++++++++++++++++" <<endl;
    cout <<"+   Programming Exercise 4    +" <<endl;
    cout <<"+   Computer Fundamental 1    +" <<endl;
    cout <<"+          Name:              +" <<endl;
    cout <<"+++++++++++++++++++++++++++++++" <<endl;
    
    cout <<"\nEnter the 8 numbers:" <<endl;
    cout <<"\nThe 8 numbers are : ";
    cin >> firstnum >> secnum >> thirdnum >> fourthnum >> fifthnum >> sixnum >> seventhnum >> eightnum;

	
    sumoffournumbers = firstnum + thirdnum + fifthnum + eightnum;
    productoftwonumbers = fourthnum * fifthnum;
    totalall = firstnum + secnum + thirdnum + fourthnum + fifthnum + sixnum + seventhnum + eightnum;
    averagenumber = totalall / 8;
    cout<<"The sum of the 1st,3rd,5th and 8th : ";
    cout << sumoffournumbers;
    
    cout<<"\nThe product of 4th and 5th number : ";
    cout << productoftwonumbers;

	
    cout <<"\nThe average is : ";
    cout << averagenumber;
    return 0;	
	
}
