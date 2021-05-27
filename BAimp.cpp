//==========================================================
// 
// implementation file for bank account
//
//==========================================================

#include "bankAccount.h"
#include <iostream>
#include <string>
using namespace std;

void bankAccount::print() const
{
	cout << "\nAccount holder: " << name << endl;
	cout << "Account number: " << accountNumber << endl;
	cout << "Current Balance: $" << balance << endl;
}

void bankAccount::setAccount(string accName, int accNum, double bal)
{
	name = accName;
	accountNumber = accNum;
	balance = bal;
}

string bankAccount::getName() const
{
	return name;
}

int bankAccount::getAccountNumber() const
{
	return accountNumber;
}

double bankAccount::getBalance() const
{
	return balance;
}

void bankAccount::deposit(double money)
{
	cout << "Deposit how much?";
	cin >> money;
	transactions++;
	balance = balance + money;
	cout << "New balance: $" << balance << endl;
}

void bankAccount::withdraw(double money)
{
	cout << "Withdraw how much?";
	cin >> money;
	transactions++;
	balance = balance - money;
	cout << "New balance: $" << balance << endl;
}

void bankAccount::monthlyStatements() const
{
	cout << transactions << " transactions have been made." << endl;
	cout << "Current balance: $" << balance;
}

bankAccount::bankAccount(string accName, int accNum, double bal)
{
	name = accName;
	accountNumber = accNum;
	balance = bal;
}