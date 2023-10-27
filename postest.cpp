//postest.cpp
//postest loop - the condition is evaluated or tested first before the loop body
#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	
	//postest loop structure using DO-WHILE loop
	do
	{
		cout << x <<" ";
		x = x - 1;
	
	}	while(x < 0); //loop condtion/test end of do-while loop include semicolon(;) after the WHILE CONDTION
	
		cout << endl << endl;
		cout << "bye!";
	
	return 0;	


}

