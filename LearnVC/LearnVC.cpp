// LearnVC.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "cstring"

using namespace std;
char* getname(void);

char* getname()
{
	char temp[80];
	cout << "Enter last name:";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy_s(pn, strlen(temp) + 1, temp);

	return pn;
}


int _tmain(int argc, _TCHAR* argv[])
{
	char*name;
	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[] name;

	name = getname();
	cout << name << " at " << (int*)name << "\n";
	delete[] name;

	getchar();
	getchar();

	/*struct inflatable
	{
	char name[20];
	float volume;
	double price;
	};

	inflatable*ps = new inflatable();
	cout << "Enter name of inflatable item:";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet:";
	cin >> (*ps).volume;
	cout << "Enter price:$";
	cin >> ps->price;

	cout << "Name:" << (*ps).name << endl;
	cout << "Volume:" << ps->volume << " cubic feet\n";
	cout << "Price:$" << ps->price << endl;
	delete ps;

	getchar();
	getchar();*/

	/*struct things
	{
	int good;
	int bad;
	};
	things grubnose = { 3, 453 };
	things*pt = &grubnose;
	printf("%d\n", grubnose.good);
	printf("%d\n", grubnose.bad);

	printf("%d\n", pt->good);
	printf("%d\n", pt->bad);

	printf("%d\n", (*pt).good);
	printf("%d\n", (*pt).bad);*/

	getchar();

	//char animal[20] = "bear";
	//const char*bird = "wren";
	//char*ps;
	//cout << animal << " and ";
	//cout << bird << "\n";

	//cout << "Enter a kind of animal:";
	//cin >> animal;
	//ps = animal;
	//cout << ps << "s!\n";
	//cout << "Before using strcpy():\n";
	//cout << animal << " at " << (int*)animal << endl;
	//cout << ps << " at " << (int*)ps << endl;

	//ps = new char[strlen(animal) + 1];
	////strcpy(ps, animal);
	//strcpy_s(ps, strlen(animal) + 1, animal);
	//cout << "After using strcpy():\n";
	//cout << animal << " at " << (int*)animal << endl;
	//cout << ps << " at " << (int*)ps << endl;
	//delete[] ps;

	//getchar();
	//getchar();

	//int* psome = new int[10];
	//delete[]psome;

	//double wages[3] = { 1000.0, 2000.0, 3000.0 };
	//short stacks[3] = { 3, 2, 1 };

	////here are two ways to get the address of an array
	//double*pw = wages;//name of an array=address
	//short*ps = &stacks[0];//or use address operator
	////with array element
	//cout << "pw=" << pw << ",*pw=" << *pw << endl;
	//pw = pw + 1;
	//cout << "add 1 to the pw pointer:\n";
	//cout << "pw=" << pw << ",*pw=" << *pw << "\n\n";
	//cout << "ps=" << ps << ",*ps=" << *ps << endl;
	//ps = ps + 1;
	//cout << "add 1 to the ps pointer:\n";
	//cout << "ps=" << ps << ",*pw=" << *ps << "\n\n";
	//printf("access two elements with array notation\n");
	//printf("stacks[0]=%d,stacks[1]=%d", stacks[0], stacks[1]);
	//printf("access two elements with pointer notation\n");
	//printf("*stacks=%d,*(stacks+1)=%d \n", *stacks, *(stacks + 1));
	//cout << sizeof(wages) << "=size of wages array\n";
	//cout << sizeof(pw) << "=size of pw pointer\n";

	//char flower[10] = "rose";
	//cout << flower << "s are red\n";
	//getchar();
	return 0;
}

