//==========================================================
// 
// implementation file for savings accounts
//
//==========================================================

#include "savingsAccount.h"
#include "highInterestSavings.h"
#include <iostream>
#include <string>
using namespace std;

void savingsAccount::interest(double rate, int numOfYear)
{
	cout << "\nCurrent balance: $" << getBalance() << endl;

	cout << "Enter interest rate in %: ";
	cin >> rate;
	interestRate = rate;

	cout << "How many years will you save? ";
	cin >> numOfYear;
	year = numOfYear;

	cout << "New balance: $" << (getBalance() * interestRate * year) << endl;
}