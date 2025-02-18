#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string tab[7]{"poniedziałek", "wtorek", "środa", "czwartek", "piątek", "sobota", "niedziela"};

int main() {
    int i = 0;
    cout << "Który dzień tygodnia? (1-7)" << endl;
    cin >> i;

    // Input validation
    if (i < 1 || i > 7) {
        cout << "Nieprawidłowy numer dnia. Proszę wpisać liczbę od 1 do 7." << endl;
    } else {
        cout << tab[i - 1] << endl; // Output the corresponding day
    }

    return 0;
}