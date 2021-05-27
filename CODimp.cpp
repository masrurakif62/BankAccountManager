//==========================================================
// 
// implementation file for certificates of deposits
//
//==========================================================

#include "certificateOfDeposit.h"
#include <iostream>
#include <string>
using namespace std;

void certificateOfDeposit::numCDmonths(int numOfMonths, double interestRate)
{
	cout << "\nCurrent balance: $" << getBalance() << endl;

	cout << "How many months for CD? ";
	cin >> numOfMonths;
	months = numOfMonths;

	cout << "Enter interest rate: ";
	cin >> interestRate;
	rate = interestRate;

	cout << "New balance: $" << ((getBalance()) * (months) * (rate)) << endl;
}