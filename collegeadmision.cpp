//checking if the student is accepted or rejected
#include <iostream>
using namespace std;
int main()
{
	float gaverage, atestscore;
	
	cout <<"Enter the general point average: ";
	cin >> gaverage;
	cout <<"Enter the admission test score: ";
	cin >> atestscore;
	
	if(gaverage >= 75)
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
