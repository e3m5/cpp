#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string imie;

  cout << "Podaj imie: ";
  cin >> imie;

  if (imie[imie.length () - 1] == 'a' || imie[imie.length () - 1] == 'A')
    cout << "Imie " << imie << " to imie zenskie!" << '\n';
  else
    cout << "Imie " << imie << " to imie meskie!" << '\n';

  return 0;
    
}
