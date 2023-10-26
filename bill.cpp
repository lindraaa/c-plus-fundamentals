//cusotomer bill
#include <iostream>
using namespace std;
int main()
{
	float  ntypedenvelopes, ntypedpages, ctypedenvelopes, ctypedpages, ttypedenvelopes, ttypedpages, totalamount;
	cout << "C U S T O M E R' S  B I L L" <<endl;
	cout <<"Enter the number of typed envelopes:" << endl;
	cin >> ntypedenvelopes;
	cout <<"Enter the number of typed pages:" <<endl;
	cin >> ntypedpages;
	cout <<"Enter the amount charge per envelopes:" <<endl;
	cin >> ctypedenvelopes;
	cout <<"Enter the amount charge per pages:" <<endl;
	cin >> ctypedpages;

	

	
	ttypedenvelopes = ntypedenvelopes * ctypedenvelopes;
	ttypedpages  = ntypedpages * ctypedpages;
    
	cout<< endl<< "The amount due for envelopes: $" ;
    cout<< ttypedenvelopes <<endl;
    cout<<"The amount due for pages: $" ;
	cout<< ttypedpages <<endl; 
    
	totalamount = ttypedenvelopes + ttypedpages;
	cout <<"The total amount due is: $";
	cout << totalamount;

	
	
	return 0;
	


}
