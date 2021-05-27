//==========================================================
// 
// header file for high interest checking accounts
//
//==========================================================

#pragma once
#ifndef H_highInterestChecking
#define H_highInterestChecking
#include <iostream>
#include <string>
#include "noServiceChargeChecking.h"
using namespace std;

class highInterestChecking : public noServiceChargeChecking
{
public:
	void interestRate(double rate);

private:
	double rateOfInterest;
};

#endif