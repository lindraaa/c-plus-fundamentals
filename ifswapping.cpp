#include<iostream>
using namespace std;
int main()
{
    int first, second;
    int temp;
    
    cout <<"Enter the first number: ";
    cin >> first;
	cout <<"Enter the second number: ";
    cin >> second;
  
  {	    
    if(first > second)
     temp = first;
     first = second;
     second = temp;
  }
  cout <<"\nThe smaller no. is " << second; 
  cout <<"\nAnd the larger no. is " << first;

	
	return 0;
}
