#include<iostream>
#include<cmath> // this library is needed to be able to use the sqrt function
using namespace std;
int main()
{
	double ans = 0.0;
	double num, ans2;
	
	//sqrt is a built in function
	ans = sqrt(64); //pow is one example of a function
	cout << ans <<endl <<endl;
	
	cout <<"The task used to input to input value in determining its square root";
	cout <<"\nEnter the number: ",
	cin >> num;
	  
	ans2= sqrt(num);
	
	cout <<"\nThe square root of " << num  <<" is " << ans2 <<endl;

	
 	return 0;
	


}
