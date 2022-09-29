#include <iostream>
#include  <math.h>
using namespace std;
float potencia_val(float v);
 
int main ()
{
	float valor;
 
cout<<"ingrese el numero"<<endl;
	cin>>valor;
	cout<<"el resultado de la secuencia es: "<<potencia_val(valor)<<endl;
	return 0;
}
float potencia_val(float v)
{
    	float i, resultado=0;
    	for (i=1; i<=v; i++)
    	{
		resultado += pow (i,2);
	}
	return resultado;
}

