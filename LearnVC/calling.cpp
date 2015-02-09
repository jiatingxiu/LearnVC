#include "stdafx.h"
#include <iostream>

#include "calling.h"

struct MyStruct
{
	int byt[10];
};

MyStruct returnArray()
{
	return MyStruct();
}

//int main()
//{
//	using namespace std;
//	cout << "main() will call the simple() function:\n";
//	simple();
//
//	cin.get();
//	return 0;
//}

void simple()
{
	using namespace std;
	cout << "I'm but a simple function. \n";
}