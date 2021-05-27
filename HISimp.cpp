//==========================================================
// 
// implementation file for high interest savings accounts
//
//==========================================================

#include "highInterestSavings.h"
#include "savingsAccount.h"
#include <iostream>
#include <string>
using namespace std;

void highInterestSavings::minimumBalance()
{
	if (getBalance() < 500)
	{
		cout << "\nRequirement of minimum $500 not met." << endl;
		cout << "Current balance: $" << getBalance() << endl;
	}
	else
	{
		interest(0.5, 12);
	}
}