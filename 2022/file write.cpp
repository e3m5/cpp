

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream PLIK;
    PLIK.open ("zapis.txt");
    if(PLIK.is_open())
    {
        cout << "podaj teksty do pliku: ";
        string tekst;
        
        cin >> tekst;
        
        PLIK << tekst << "\n";
        PLIK.close();
        
    }

    ifstream PLIK0("zapis.txt");
    if (PLIK0.is_open())
    {
        cout << "\n zawartość pliku : \n";
        string linia;
        while(getline(PLIK0, linia))
        {
            cout << linia << "\n";
        }
        PLIK0.close();
    }
    return 0;
}
