#include <iostream>
using namespace std;

int main()
{
	int shoot;
	char choice;
	
	cout<<"Did the bastketball went through the hoop? [Enter 1 for YES or 0  for NO] ";
	cin >> shoot;
	
	if (shoot == 1) 
	  {
	  cout<<"\nI did it";
	  cout <<"\nIs Maleek inside the 3 point line? [Y/N]:";
	  cin >> choice;
          if(toupper(choice)== 'Y' )
              cout <<"\n2pts for me!";
		  else
		      cout <<"\n3pts for me!";
	  }
	else
	   {
	   
	    cout<<"\nMissed it";
       
	   }

	
    return 0;	

}
