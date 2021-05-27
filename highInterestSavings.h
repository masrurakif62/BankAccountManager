//==========================================================
// 
// header file for high interest savings
//
//==========================================================

#pragma once
#ifndef H_highInterestSavings
#define H_highInterestSavings
#include <iostream>
#include <string>
#include "savingsAccount.h"
using namespace std;

class highInterestSavings :public savingsAccount
{
public:
	void minimumBalance();

private:
	double minimum;
};

#endif