/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    int p, n, d, e;

cout<<"cantidad de primos: ";
cin>>p;

    n = 2;
    while (p > 0) {

        e = 1;
        for (d = 2; d < n; d++) {
            if (n % d == 0) {
                e = 0;
                break;
            }
        }
        if (e) {
            cout<< n <<endl;
            p--;
        }
        n++;
    }

    return 0;
}