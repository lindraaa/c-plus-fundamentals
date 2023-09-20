//for.cpp
//another form of a pretest loop
#include <iostream>
using namespace std;

int main()
{
	int x;
	// pretest loop structure using FOR loop
	for( x = 10; x > 0; --x) // initialization ; condition; updating(increment or decrement)
	{                        // --( shorthand symbol for decrement)
	                        // ++(increment symbol for increment)
	  cout << x <<""; 
   }  //end of our loop
     
	 cout <<"\n\nbye";
	
	
	return 0;
}
