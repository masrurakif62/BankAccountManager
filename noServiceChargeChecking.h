//==========================================================
// 
// header file for no service charge checking accounts
//
//==========================================================

#pragma once
#ifndef H_noserviceChargeChecking
#define H_noserviceChargeChecking
#include <iostream>
#include <string>
#include "checkingAccount.h"
using namespace std;

class noServiceChargeChecking :public checkingAccount
{
public:
	void interestRate(double R);

private:
	double rate;
};

#endif