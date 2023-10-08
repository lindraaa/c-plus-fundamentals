//a function that does not return a value but with arguments	
#include<iostream>
using namespace std;

//You can create a user/ programmmer defined function before the main() 
//function declaration
  
float add(float, float);
//main function    
int main() //The name of its function is main
{
	float ans1, ans2; 
	float  x = 5;
	float f = 42 , g = 77.72;
 
 	ans1 = add(50,200); //function call or calling a function(using its name)
 	cout <<"The sum of the two nos. is: " << ans1 <<endl;
	cout << endl;
	
	cout <<"Running the add() function 5x using the while loop\n";
	while(x > 0)
	{
		add(10,33); //function call or calling function again second time
		x = x - 1;
		cout <<endl;
	} // end while
	
	cout <<"The running the add() function after the while loop\n";
    ans2 =	add(f , g);   // finction call to add function again the last time
	cout <<"The sum of the two nos. is: " << ans2 <<endl;
	return 0;	
}

//you can create a user/ programmmer defined function after the main() function
//example of a function tjat returns a value


//funtion definition - meaning this is the section for creating a function header and its body
float add(float a, float b)//the name of the function is add() // function header
//start of function 
{
	
	float sum;
 	sum = a+b;
 	
 
	return sum;
}// end of add()function body
