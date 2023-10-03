//find the largest number
#include <iostream>
using namespace std;
int main()
{
	float first, second, third, sum, av, pr;
	
	cout <<"Enter the three different integers: ";
	cin >> first >> second >> third;
	
	sum = first + second + third;
	cout <<"Sum is " << sum;
	
	av = sum/ 3;
	cout <<"\nAverage is " << av;
	
	pr = first * second * third;
	cout <<"\nProduct is "<< pr;
	
 
 
   if( first < second && first < third)
   cout <<"\nSmallest is " << first;
   
   if( second < first && second < third)
   cout <<"\nSmallest is " <<second;
   
   if(third < first && third < second)
   cout <<"\nSmallest is " << third;   
   
   
   
    if(	first > second && first > third)
    cout <<"\nLargest is " << first;
    
	if( second > first && second > third)
	cout <<"\nLargest is " << second;
	
	if( third > first && third >second)
	cout <<"\nLargest is " << third;    
	
	return 0;	
	
}
