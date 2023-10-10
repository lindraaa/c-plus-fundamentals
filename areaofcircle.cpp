#include<iostream>
using namespace std;
int main()
{
	
  float number, areaofcircle, circumferenceofcircle;
  cout <<"Enter the number:";
  cin >>  number;
  
  if (number ==1)
   {
   areaofcircle = 3.14 * (number * number);
   cout <<"\nThe area of a circle is " <<areaofcircle;
   } 
  else
   {
   circumferenceofcircle =  2 * 3.14 * number;
   cout <<"\nThe circumference of a circle is " << circumferenceofcircle;
    }
	
	return 0;
	

}

//computation for area of a circle and circumference of cirlce
