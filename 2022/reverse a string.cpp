
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
  string zdanie;
  cout << "wpisz zdanie: ";
  getline(cin, zdanie);
  
  int dlugosc=zdanie.length();
  for (int i=dlugosc-1; i>=0; i--)
  {
      cout<<zdanie[i];
  }
  return 0;
}
