
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
  string zdanie1;
  cout << "wpisz zdanie: ";
  getline(cin, zdanie1);
  
  string zdanie2;
  cout<<"wpisz drugie zdanie: ";
  getline(cin, zdanie2);
  
  string zdanie3=zdanie1+zdanie2;
  cout<<zdanie3<<endl;
  
  return 0;
}
