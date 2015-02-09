#include "stdafx.h"
#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);
void cheers(int);
double cube(double);

//int main(void)
//{
//	using namespace std;
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 42, 64, 128 };
//	int sum = sum_arr(cookies, ArSize);
//	cout << "Total cookies eaten: " << sum << " \n";
//
//	cin.get();
//	return 0;
//
//	cheers(5);
//	cout << "Give me a number:";
//	double side;
//	cin >> side;
//	double volume = cube(side);
//	cout << "A " << side << "-foot cube has a volume of ";
//	cout << volume << " cubic feet. \n";
//	cheers(cube(2));
//
//	cin.get();
//	cin.get();
//	return 0;
//}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! ";
	}
	cout << endl;
}

double cube(double x)
{
	return x*x*x;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}