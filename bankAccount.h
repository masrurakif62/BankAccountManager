//==========================================================
// 
// header file for bank account
//
//==========================================================

#pragma once
#ifndef H_bankAccount
#define H_bankAccount
#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
public:
	void print() const;
	void setAccount(string accName, int accNum, double bal);

	string getName() const;
	int getAccountNumber() const;
	double getBalance() const;

	void deposit(double money);
	void withdraw(double money);
	void monthlyStatements() const;

	bankAccount(string accName = "", int accNum = 0, double bal = 0);

private:
	string name;
	int accountNumber;
	double balance;
	int transactions;

};

#endif