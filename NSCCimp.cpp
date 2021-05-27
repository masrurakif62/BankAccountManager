//==========================================================
// 
// implementation file for checking accounts with no service
// charge
//
//==========================================================

#include "noServiceChargeChecking.h"
#include <iostream>
#include <string>
using namespace std;

void noServiceChargeChecking::interestRate(double R)
{
	cout << "\nCurrent balance $: " << getBalance() << endl;

	if (getBalance() < 500)
	{
		cout << "Minimum balance requirement not met." << endl;
		cout << "Current balance: $" << getBalance() << endl;
	}
	else
	{
		cout << "Enter interest rate: ";
		cin >> R;
		rate = R;
	}
}