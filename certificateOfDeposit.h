//==========================================================
// 
// header file for certificates of deposits
//
//==========================================================

#pragma once
#ifndef H_certificateOfDeposit
#define H_certificateOfDeposit
#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

class certificateOfDeposit : public bankAccount
{
public:
	void numCDmonths(int numOfMonths, double interestRate);

private:
	int months;
	double rate;
};

#endif