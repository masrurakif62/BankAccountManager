//==========================================================
//
// Title:      <CSC 2110 Project>
// Course:     CSC 2110
// Author:     <Masrur Akif>
// Due Date:   <April 16, 2021>
//
//==========================================================

#include "bankAccount.h"
#include "certificateOfDeposit.h"
#include "savingsAccount.h"
#include "highInterestSavings.h"
#include "checkingAccount.h"
#include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"
#include "highInterestChecking.h"

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	// Show application header
	cout << "CSC 2110 Project" << endl;
	cout << "-----------------------" << endl << endl;

	// Introduction & setup
	string inputName;
	int inputNum;
	double inputBal;
	cout << "Enter your information below." << endl;
	cout << "\nLast Name: ";
	cin >> inputName;
	cout << "Account number: ";
	cin >> inputNum;
	cout << "Account balance ($): ";
	cin >> inputBal;

	char looper = 'Y';

	while (looper == 'Y')
	{

		char choice;
		cout << "\nSelect the type of account below." << endl;
		cout << "Checking (Press C)" << endl;
		cout << "Savings (Press S)" << endl;
		cout << "Certificate of Deposit (Press D)" << endl;
		cin >> choice;
		switch (choice)
		{
		case 'C':
			char checkingChoice;
			cout << "\nSelect the type of checking account below." << endl;
			cout << "Regular checking account (Type R)" << endl;
			cout << "Service charge checking account (Type S)" << endl;
			cout << "No service charge checking account (Type N)" << endl;
			cout << "High Interest Checking (Type H)" << endl;
			cin >> checkingChoice;
			if (checkingChoice == 'R')
			{
				checkingAccount newCA1;
				newCA1.setAccount(inputName, inputNum, inputBal);
				newCA1.print();
				newCA1.writeCheck(1);
			}
			else if (checkingChoice == 'S')
			{
				serviceChargeChecking newCA2;
				newCA2.setAccount(inputName, inputNum, inputBal);
				newCA2.print();
				newCA2.monthlyServiceCharge(0.5, 1);
			}
			else if (checkingChoice == 'N')
			{
				noServiceChargeChecking newCA3;
				newCA3.setAccount(inputName, inputNum, inputBal);
				newCA3.print();
				newCA3.interestRate(0.5);
			}
			else if (checkingChoice == 'H')
			{
				highInterestChecking newCA4;
				newCA4.setAccount(inputName, inputNum, inputBal);
				newCA4.print();
				newCA4.interestRate(0.5);
			}
			break;

		case 'S':
			char savingsChoice;
			cout << "\nSelect the type of savings account below." << endl;
			cout << "Regular savings (Press R)" << endl;
			cout << "High interest savings (Press H)" << endl;
			cin >> savingsChoice;
			if (savingsChoice == 'R')
			{
				savingsAccount newSA1;
				newSA1.setAccount(inputName, inputNum, inputBal);
				newSA1.print();
				cout << endl;
				newSA1.interest(0.5, 12);
			}
			else if (savingsChoice == 'H')
			{
				highInterestSavings newSA2;
				newSA2.setAccount(inputName, inputNum, inputBal);
				newSA2.print();
				cout << endl;
				newSA2.minimumBalance();
			}
			break;

		case 'D':
			certificateOfDeposit newCDaccount;
			newCDaccount.setAccount(inputName, inputNum, inputBal);
			newCDaccount.print();
			cout << endl;
			newCDaccount.numCDmonths(12, 0.5);
			break;
		}

		cout << "\nContinue? (Y/N)" << endl;
		cin >> looper;
	}

	// Show application close
	cout << "\nEnd of CSC 2110 Project" << endl;
	cout << "-----------------------" << endl;
}