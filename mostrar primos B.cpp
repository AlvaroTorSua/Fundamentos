/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
bool primo(int num);
int main()
{
    int n,i=1,k=0;
    
    cout<<"ingrese la cantidad de primos a generar: ";
    cin >> n;
    while (i<=n){
        for (int j=2;j<i;j++){
        if (primo(k)==true){
            cout<<k<<",";
         i++;
        }
         k++;
    }
    }

    return 0;
}
bool primo (int num)
{
bool band=true;
    for(int j=2;j<num;j++)
    if (num % j==0){
        band=false;
        break;
        
    }
    return band;
}


