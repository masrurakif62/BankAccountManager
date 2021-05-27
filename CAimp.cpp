//==========================================================
// 
// implementation file for checking accounts
//
//==========================================================

#include "checkingAccount.h"
#include <iostream>
#include <string>
using namespace std;

void checkingAccount::writeCheck(int money)
{
	cout << "\nCurrent balance: $" << getBalance() << endl;

	cout << "Enter the value you want on the check: $";
	cin >> money;
	check = money;

	cout << "Check value: $" << check << endl;
	cout << "New balance: $" << getBalance() - check << endl;
}

checkingAccount::checkingAccount(int checks)
{
	check = checks;
}