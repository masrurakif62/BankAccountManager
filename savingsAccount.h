//==========================================================
// 
// header file for savings accounts
//
//==========================================================

#pragma once
#ifndef H_savingsAccount
#define H_savingsAccount
#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

class savingsAccount :public bankAccount
{
public:
	void interest(double rate, int numOfYear);

private:
	double interestRate;
	int year;
};

#endif