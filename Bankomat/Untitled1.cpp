
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream pinFile("pin.txt");
    string correctPin;
    getline(pinFile, correctPin);
    pinFile.close();


    ifstream kontoFile("konto.txt");
    double saldo;
    kontoFile >> saldo;
    kontoFile.close();


    string pin;
    cout << "Podaj PIN: ";
    cin >> pin;


    if (pin != correctPin) {
        cout << "Bledny PIN!" << endl;
    }
    else {

        cout << "1. Sprawdz stan konta" << endl;
        cout << "2. Wyplac gotowke" << endl;
        cout << "3. Wplac gotowke" << endl;
        cout << "4. Zakoncz program" << endl;
        int wybor;
        cout << "Wybierz opcje: ";
        cin >> wybor;


        if (wybor == 1) {
            cout << "Stan konta: " << saldo << " zl" << endl;
        }
        else if (wybor == 2) {
            double kwota;
            cout << "Podaj kwote do wyplaty: ";
            cin >> kwota;
            if (kwota > saldo) {
                cout << "Brak wystarczaj¹cych srodkow na koncie!" << endl;
            }
            else {
                saldo -= kwota;
                ofstream kontoFile("konto.txt");
                kontoFile << saldo;
                kontoFile.close();
                cout << "Operacja sie powiodla. Odbierz gotowke." << endl;
            }
        }
        else if (wybor == 3) {
            double kwota;
            cout << "Podaj kwotê do wplaty: ";
            cin >> kwota;
            saldo += kwota;
            ofstream kontoFile("konto.txt");
            kontoFile << saldo;
            kontoFile.close();
            cout << "Operacja sie powiodla. Pieniedze zostaly zaksiegowane na koncie." << endl;
        }
        else if (wybor == 4) {
            cout << "Dziekujemy za skorzystanie z naszych uslug. Do widzenia!" << endl;
        }
        else {
            cout << "Nieprawidlowy wybor opcji." << endl;
        }
    }

    return 0;
}

