//==========================================================
// 
// implementation file for checking accounts with a service
// charge
//
//==========================================================

#include "serviceChargeChecking.h"
#include <iostream>
#include <string>
using namespace std;

void serviceChargeChecking::monthlyServiceCharge(double rate, int checkNum)
{
	cout << "\nCurrent balance: $" << getBalance() << endl;

	cout << "How many checks will you need to write every month? ";
	cin >> checkNum;
	numOfCheck = checkNum;
	if (numOfCheck > 5)
	{
		cout << "Exceeds check limit." << endl;
	}
	else
	{
		cout << "Enter monthly service charge: $";
		cin >> rate;
		monthlyRate = rate;
	}
}