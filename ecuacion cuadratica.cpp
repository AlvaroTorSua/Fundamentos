
#include <iostream>
#include "math.h"
#include "conio.h"

using namespace std;

int main()
{
    float a,b,c,d,X1,X2;
    
    cout<<"Por favor ingrese un numero para a: ";
    cin>>a;
    cout<<"Por favor ingrese un numero para b: ";
    cin>>b;
    cout<<"Por favor ingrese un numero para c: ";
    cin>>c;
    d=pow(b,2)-4*a*c;
        if (a==0){
        cout << "no hay solucion"<<endl;
    
    }else  {
    if(d>0)
    {
        
        X1= (-b+sqrt(b*b-4*a*c))/(2*a);
        X2= (-b-sqrt(b*b-4*a*c))/(2*a);
        
        cout<<"El resultado de X1 es: "<<X1<<endl;
        cout<<"El resultado de X2 es: "<<X2<<endl;
        
    }
    else
        if (d==0)
        {
            X1=(-b)/(2*a);
            cout<<"El resultado es unico "<<X1;
            
        }
        else
        {
            X1=b/(2*a);
            X2=sqrt(-d)/2*a;
            cout<<"El resultado de X1 es: "<<X1<<"+"<<X2<<"i"<<endl;
            cout<<"El resultado de X2 es: "<<X1<<"+"<<X2<<"i"<<endl;
        }
        getch();
}

    return 0;

}