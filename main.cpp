/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()

{
    srand(time(NULL));
    int tab[5];
    for (int i=0; i<=4;i++)
     {
        tab[i] = rand()%21;
        cout << tab[i] << endl;
     }
    return 0;
}
