// tanya.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int a, b;
int suma, resta, multiplicacion, division;
int main()
{
	cout << "Ingrese un numero" << endl;
	cin >> a;
	cout << "Ingrese otro numero" << endl;
	cin >> b;
	suma = a + b;
	resta = a - b;
	multiplicacion = a*b;
	division = a / b;
	cout << a << " + " << b << " = " << suma << endl;

	cout << a << " - " << b << " = " << resta << endl;
	cout << a << " * " << b << " = " << multiplicacion<< endl;
	cout << a << " / " << b << " = " << division << endl;
	system("pause()");
    return 0;
}

