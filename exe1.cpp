//convert of time
#include <iostream>
using namespace std;
int main()
{
	float timeinhrs, timeinmins, timeinsecs, hrstosecs, minstosecs, totaltimeinsecs;
	cout<< "Enter the elapsed time in hours:";
	cin>> timeinhrs;
	cout<< "\nEnter the elapsed time in minutes:";
	cin>>  timeinmins;
	cout<< "\nEnter the elapsed time in seconds:";
	cin >> timeinsecs;
	
	cout<< "\nThe elapsed time you entered is ";
	cout<<timeinhrs;
	cout<<":" <<timeinmins;
	cout<<":" <<timeinsecs;
	cout<<".";

	hrstosecs= timeinhrs*3600;
	minstosecs= timeinmins*60;
	totaltimeinsecs = hrstosecs + minstosecs + timeinsecs;
	
	cout<<"\nThe equivalent time in seconds is:";
	cout<< totaltimeinsecs;
	cout <<".";
	
	return 0;
	
}
