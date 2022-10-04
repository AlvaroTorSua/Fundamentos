/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
float ronaldonazario(int base,int expo);
using namespace std;

int main()
{
    int b,e;
    cout<<"meta su base: ";
    cin>>b;
    cout<<"ingrese el exponente: ";
    cin>>e;
    cout<<"el resultado es: "<<ronaldonazario(b,e);

    return 0;
}
float ronaldonazario(int base,int expo)
{
    float aux=1;
    for(int i=1;i<=expo;i++)
    aux=aux*base;
    return aux;
} 