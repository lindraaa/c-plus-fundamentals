#include<iostream>
using namespace std;
void add();
int main ()

{

	add();
	return 0;
}

void add()
{
	float area, length, width;
	
	cout << "This programs determine the area of triangle \n";
	cout << "\nInput the length of the right triangle: ";
	cin >> length;
	
	cout << "Input the width of the right triangle: ";
	cin >> width;
	
	area = (length * width) / 2 ;
	cout << "\nThe area of the right triangle is " << area << " square units";
	
	return;
	
}
