//other method program
#include <iostream>
using namespace std;
int main()
{
	float gaverage, atestscore;
	
	cout <<"Enter the grade point average: ";
	cin >> gaverage;
	cout <<"Enter the admission test score: ";
	cin >> atestscore;
	
   
   
      if(gaverage <= 0 || gaverage>= 100 )
       cout <<"ERROR";
      else if(atestscore <=0 || atestscore >=100)
       cout <<"ERROR"; 	
 
   else if(gaverage >= 75)
	{
	  if(atestscore>=60)	
		cout<<"\nAccept";
	
	   else
		
		cout<<"\nReject";
    }
	else
	
	{
	
		if(atestscore >= 80)
		cout<<"\nAccept";
		
		else
	
		cout<<"\nReject";	
    }
	


	 
	return 0;	
}
