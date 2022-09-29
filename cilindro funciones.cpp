/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
float vol_cilindro(float r, float h);
int main(){
    float radio,altura;
   cout<<"ingrese el radio: ";
  cin>> radio;
  cout<<"ingrese la altura: ";
  cin>> altura;
  cout<<"el volumen es; "<<vol_cilindro(radio,altura)<<endl;
  return 0;
  
}
float vol_cilindro(float r, float h)
{
    float volumen;
    volumen= 3.1415*r*r*h;
    return volumen;
}