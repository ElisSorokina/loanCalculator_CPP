#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	
	const int MONTHS_IN_YEAR = 12;
	string name, institution, date;
	int years;
	double loanAmt, intRate;

	
	cout << "\nLoan Payment Calculator ..." << endl;

	
	cout << "\nPlease enter the following information" << endl
		<< "\tBorrower's name: ";
	getline(cin, name);
	cout << "\tLoaning institution: ";	
	getline(cin, institution);
	cout << "\tLoan amount: ";
	cin >> loanAmt;
	cout << "\tAnnual Interest Rate: ";
	cin >> intRate;
	cout << "\tTerm of Loan(years): ";
	cin >> years;
	cout << "\tDate of Report: ";
	cin >> date;
	double monthlyIntRate = intRate / MONTHS_IN_YEAR;
	int numOfPaymnets = years * MONTHS_IN_YEAR;
	double rateMultiplier = pow(1+monthlyIntRate/100, numOfPaymnets);
	double monthlyPay = monthlyIntRate*rateMultiplier*loanAmt/(rateMultiplier-1)/100;

	double totAmntPay = monthlyPay*numOfPaymnets;
	double totInterest = totAmntPay-loanAmt;
	
	cout << "--------------------------------------"<<endl
	 << "Loan Payment Summary Report"<< endl
	 << endl <<left << setw(30) << institution << name<< endl
	 << "Annual Interest Rate: "<< intRate << "%"<<endl
	 << "Date: "<< date <<endl
	 << endl
	 << left << setw(30) <<	"Loan Amount: " << "$ " << loanAmt << endl
	 << left << setw(30) << "Monthly Interest Rate: " << monthlyIntRate<< "%"<<endl
	 << left << setw(30) << "Number of Payments: " << numOfPaymnets<< endl
	 << left << setw(30) << "Monthly Payment: " << "$ " << monthlyPay << endl
	 << endl
	 << left << setw(30) << "Total Amount to Pay: " << "$ " << totAmntPay << endl
	 << left << setw(30) << "Total Interest: " << "$ " << totInterest << endl;
	 return  0;	
	
}
