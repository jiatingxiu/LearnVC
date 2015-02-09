#include "stdafx.h"
#include <iostream>

double betsy(int);
double pam(int);

void estimate(int lines, double(*pf)(int));

//int main()
//{
//	using namespace std;
//
//	int rats = 101;
//	int &rodents = rats;
//
//	cout << "rats=" << rats;
//	cout << ", rodents=" << rodents << endl;
//
//	cout << "rats address=" << &rats;
//	cout << ", rodents address= " << &rodents << endl;
//
//	cin.get();
//	return 0;
//
//	int code;
//
//	cout << "How many lines of code do you need? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate:\n";
//	estimate(code, betsy);
//	cout << "Here's Pam's estimate:\n";
//	estimate(code, pam);
//
//	cin.get();
//	cin.get();
//
//	return 0;
//}

double	betsy(int lns)
{
	return 0.05*lns;
}

double pam(int lns)
{
	return 0.03*lns + 0.0004*lns*lns;
}

void estimate(int lines, double(*pf)(int))
{
	using namespace std;
}