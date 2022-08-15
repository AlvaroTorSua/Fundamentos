// Santiago vasquez.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	float perimetro,radio,area,p;
	p=3.1416;
	cout <<"Introduzca el radio" <<endl;
	cin>> radio;
	perimetro= 2*p*radio;
	area= p*radio*radio;
	cout<< "El perimetro es: "<<perimetro<< endl;
	cout <<"El area es:"<<area<<endl;
	getch();
	return 0;
}

