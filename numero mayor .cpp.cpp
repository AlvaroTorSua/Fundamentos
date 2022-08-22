#include<iostream>
using namespace std;
int main(){
     int numero1, numero2, numero3, mayor;
     cout <<"ingrese el primer numero:"  <<endl;
     cin >>numero1 ;
     cout <<"ingrese el segundo numero:"  <<endl;
     cin >>numero2 ;
     cout <<"ingrese el tercer numero:"  <<endl;
     cin >>numero3 ;
     if (numero1>numero2)
       if (numero1>numero3)
       mayor=numero1;
      else
      mayor=numero3;
      else{
      if (numero2<=numero3)
      mayor=numero2;
      else
      mayor=numero3;
      
      cout <<"el numero mayor es:"  <<mayor;
      
      return 0;
}
}