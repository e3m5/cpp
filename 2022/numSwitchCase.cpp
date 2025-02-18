#include <iostream>
using namespace std;
int main() {
    int choice = 0, num1 = 0, num2 = 0;;
    cout << "---------menu---------" << endl;
    cout << "--1.malejaca--" << endl;
    cout << "--2.rosnaca" << endl; 
    cout << "----------------------" << endl;
    cout << "_____wybierz_____" << endl;
    cin >> choice;
    cout << "podaj jedna liczbe" << endl;
    cin >> num1; 
    cout << "podaj 2  liczbe" << endl;
    cin >> num2;
    switch(choice) {
        case 1:
            for (num2 < num1; num1--) {
                cout << num1 << num2 << endl;
                break;
            }
        case 2:
            for (num2 < num1; num2++) {
                cout << num2 << num1 << endl;
                break;
            }
        default:
            cout << "zla liczba  " << endl;
    }
}