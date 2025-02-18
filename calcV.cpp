#include <iostream>
#include <math.h>
#include <iomanip> //setprecision
using namespace std;


int main() {

  char op;
  float num1, num2;
  
//wstep,input uzytkownika
  
cout << "wprowadz pierwsza liczbe " << endl;
  cin >> num1;
cout << "wprowadz druga liczbe " << endl;
cout << "jesli dotyczy logarytmu,logarytmu dziesietnego lub pierwiastkow wybierz 0, "<< endl;
cout << "dla poteg bedzie to wykładnik: " << endl;
  cin >> num2;
cout << "wybierz dzialanie: +, -, *, / " << endl;
cout << "l(logarytm),x (logarytm dziesietny),p (potęgowanie) " << endl;
cout << "d (pierwiastek),t (pierwiastek 3 stopnia) : " << endl;
cin >> op;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
  

  switch(op) {
    
    //dodawanie
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    
    //odejmowanie
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    
    
    //mnożenie
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    
    //dzielenie
    case '/':
      if (num1 || num2 == 0);
        cout << "dzialanie bledne";
        break;
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    //pierwiastek 2 stopnia
    case 'd':
        cout << "pierwiastek drugiego stopnia z " << num1 << " rowna sie " << sqrt(num1) << " ≅ " <<
        setprecision(2)<<fixed<<sqrt(num1);
        break;
    
    //pierwiastek 3 stopnia
    case 't':
        cout << "pierwiastek 3 stopnia z " << num1 << " rowna sie " << cbrt(num1) << " ≅ " <<
        setprecision(2)<<fixed<<cbrt(num1);
        break;

    //logarytm
    case 'l':
      cout << "logartym z " << num1 << "=" << log (num1);
      break;
    
    //logarytm dziesietny
    case 'x':
      cout << "logarytm z " << num1 << "=" << log10 (num1);
      break;
   
   //potega do wykladnika przypisanego dla num2 
    case 'p':
        cout << num1 << " do potęgi " << num2 << " wynosi "  << pow(num1,num2);
        break; 
    
    //instrukcja default,pojawia sie przy blednym wyborze operacji
    default:
      cout << "blad";
      break;
  }

  return 0;
}
