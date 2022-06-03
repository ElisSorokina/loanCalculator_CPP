#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	
	
	string name, institution, date;
	int years;
	double loanAmt, intRate;

	
	cout << "\nLoan Payment Calculator ..." << endl;

	
	cout << "\nPlease enter the following information" << endl
		<< "\tBorrower's name: ";
	getline(cin, name);
	cout << "\tLoaning institution: ";
	cin.ignore();
	getline(cin, institution);
	cout << "\tLoan amount: ";
	cin >> loanAmt;
	cout << "\tAnnual Interest Rate: ";
	cin >> intRate;
	cout << "\tTerm of Loan(years): ";
	cin >> years;
	cout << "\tDate of Report: ";
	cin >> date;

	
	
}
