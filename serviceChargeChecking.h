//==========================================================
// 
// header file for service charge checking accounts
//
//==========================================================

#pragma once
#ifndef H_serviceChargeChecking
#define H_serviceChargeChecking
#include <iostream>
#include <string>
#include "checkingAccount.h"
using namespace std;

class serviceChargeChecking :public checkingAccount
{
public:
	void monthlyServiceCharge(double rate, int checkNum);

private:
	double monthlyRate;
	int numOfCheck;
};

#endif