#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str1;
  float prelim, midterm, finals, quiz1, quiz2, quiz3, totalexam,totalquiz,averageexam,averagequiz,percentage1,percentage2, finalgrade;
  
  cout<<"Enter the full name of student:";
  getline(cin, str1);
  
  cout <<"\nEnter the Prelim exam score:";
  cin >> prelim;
  cout <<"\nEnter the Midterm exam score:";
  cin >> midterm; 
  cout <<"\nEnter the Final exam score:";
  cin >> finals;
  cout <<"\nEnter the Quiz 1 score:";
  cin >> quiz1;
  cout <<"\nEnter the Quiz 2 score:";
  cin >>quiz2;
  cout <<"\nEnter the Quiz 3 score:";
  cin >>quiz3;
  
  cout <<"__________________________________________________";
  
  cout <<"\n  S U M M A R Y  O F  S T U D E N T  G R A D E "<<endl;
  cout <<"Full Name of the student:";
  cout<< str1;
  
  totalexam = prelim + midterm + finals;
  totalquiz = quiz1 + quiz2 + quiz3;

	
  averageexam = totalexam/3;
  averagequiz = totalquiz/3;
  percentage1= averageexam*.6;
  percentage2= averagequiz*.4;
  finalgrade = percentage1 + percentage2;
  
  
  cout <<"\nTotal score on Major Examination:";
  cout <<totalexam;
  cout <<"\nTotal score on Quizzes:";
  cout <<totalquiz;
  cout <<"\nAverage on Major Examintaion:";
  cout <<averageexam;
  cout <<"\nAverage on Quizzes:";
  cout <<averagequiz;
  cout <<"\nFinal Grade:";
  cout <<finalgrade;
   

	
	
	return 0;
}
