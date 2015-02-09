#include "stdafx.h"
#include <iostream>

struct sysop
{
	char name[26];
	char quote[64];
	int used;
};

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);
double refcube(const double &ra);
const sysop & use(sysop&sysopref);

//int main()
//{
//	using namespace std;
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1=$" << wallet1;
//	cout << "wallet2=$" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";
//	swapr(wallet1, wallet2);
//	cout << "wallet1=$" << wallet1;
//	cout << "wallet2=$" << wallet2 << endl;
//
//	cout << "Using pointers to swap contents:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1=$" << wallet1;
//	cout << "wallet2=$" << wallet2 << endl;
//
//	cout << "Trying to use passing by value:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1=$" << wallet1;
//	cout << "wallet2=$" << wallet2 << endl;
//
//	double side = 3.0;
//	double *pd = &side;
//	double &rd = side;
//	long edge = 5L;
//	double lens[4] = { 2.0, 5.0, 10.0, 12.0 };
//	cout << refcube(side) << "\n";
//	cout << side << "\n";
//	cout << refcube(lens[2]) << "\n";
//	cout << refcube(rd) << "\n";
//	cout << refcube(*pd) << "\n";
//	cout << refcube(edge) << "\n";
//	cout << refcube(7.0) << "\n";
//	cout << refcube(side + 10.0) << "\n";
//
//	cin.get();
//}

double refcube(const double &ra)
{
	return ra*ra*ra;
}

void swapr(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}