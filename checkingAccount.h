//==========================================================
// 
// header file for checking accounts
//
//==========================================================

#pragma once
#ifndef H_checkingAccount
#define H_checkingAccount
#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

class checkingAccount : public bankAccount
{
public:
	void writeCheck(int money);
	checkingAccount(int checks = 0);

private:
	int check;
};

# endif