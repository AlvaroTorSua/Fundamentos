
#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
   int a,b,opcion;
   float r;
   do {
     cout << endl;
     cout << "1.- area cuadrado" << endl;
     cout << "2.- area rectangulo" << endl;
     cout << "3.- area circulo" << endl;
     cout << "4.- area triangulo" << endl;
     cout << "0.- Salir" << endl;
     cout << "Elige una opción: " ;
     cin >> opcion;
     switch (opcion) {
	    case 1:     cout << "intrduzca el lado: " ;
     cin >> a;
	    r = a*a; break;
	    case 2:      cout << "introduzca la base: " ;
     cin >> a;
          cout << "introduzca altura: " ;
     cin >> b;
	    r = a * b; break;
	    case 3:     cout << "introduzca el radio: " ;
     cin >> a;
	    r = 3.14159*a*a; break;
	    case 4:     cout << "introduzca la base: " ;
     cin >> a;
          cout << "introduzca la altura: " ;
     cin >> b;
	    r = (a*b)/2; break;
		case 0: cout << "Salir";break;
	    default: cout << "Opcion invalida" << endl;
     }
     if ((opcion>=1)&&(opcion<=4)) 
     	cout << "El resultado es " << r << endl;
   } while (opcion != 0);
   getch();
}