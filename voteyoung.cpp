#include <iostream>
using namespace std;

int main()
{
	float age;
	char restatus;
    cout <<"Enter the age: ";
    cin >> age;
    
    if(age > 18)
      {
	   cout <<"\nEnter registration status(Y/N): ";
       cin >> restatus;
       if (toupper(restatus) ==  'Y')
	     cout <<"\nYou can vote";
	   else
	     cout <<"\nYou must register before you can vote";
      } 
	 else 
	cout <<"\nYou are to young to vote";   
    
	
	return 0;	

	
}
