//==========================================================
// 
// implementation file for checking accounts with high
// interest
//
//==========================================================

#include "highInterestChecking.h"
#include <iostream>
#include <string>
using namespace std;

void highInterestChecking::interestRate(double rate)
{
	cout << "\nCurrent balance: $" << getBalance() << endl;

	if (getBalance() < 1000)
	{
		cout << "\nMinimum balance requirement not met." << endl;
		cout << "Current balance: $" << getBalance() << endl;
	}
	else
	{
		cout << "Enter interest rate (%): ";
		cin >> rate;
		rateOfInterest = rate;
	}
}