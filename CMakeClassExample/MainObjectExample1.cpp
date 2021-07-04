/*
Author: https://github.com/juancarlosmiranda/
Date: July 2021
Based on:

Example of class template and projct in C++
Compiled with Visual Studio 2019
*/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
#include "MyOwnClass.h"

int main()
{
	std::cout << "----------------------------------" << endl;
	std::cout << "Class examples for C++ template!!!" << endl;
	std::cout << "----------------------------------" << endl;

	MyOwnClass myOwnObject;
	std::cout << "Setting my class data = ";
	myOwnObject.SetProperty1(55);
	myOwnObject.SetProperty2(56);

	std::cout << "Get private data Property1=" << myOwnObject.GetProperty1() << endl;
	std::cout << "Get private data Property2=" << myOwnObject.GetProperty2() << endl;

	myOwnObject.PrintData("PRINTING A MESSAGE!!");

	return 0;
}
