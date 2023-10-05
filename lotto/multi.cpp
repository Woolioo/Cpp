#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

// Autor: Twój autor
// Opis: Prosty program do gry w Lotto i Multi Multi

// Funkcja do losowania liczby pseudolosowej z zakresu [min, max]
int losujLiczbe(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

// Funkcja do wybierania unikalnych liczb przez u¿ytkownika
vector<int> wybierzLiczby(int iloscLiczb, int min, int max) {
    vector<int> wybraneLiczby;
    while (wybraneLiczby.size() < iloscLiczb) {
        int liczba;
        cout << "Wprowadz liczbe (" << min << "-" << max << "): ";
        cin >> liczba;
        
        if (liczba < min || liczba > max) {
            cout << "Liczba poza zakresem. Sprobuj ponownie.\n";
            continue;
        }
        
        if (find(wybraneLiczby.begin(), wybraneLiczby.end(), liczba) != wybraneLiczby.end()) {
            cout << "Ta liczba zostala juz wybrana. Sprobuj ponownie.\n";
            continue;
        }
        
        wybraneLiczby.push_back(liczba);
    }
    
    return wybraneLiczby;
}

// Funkcja do sortowania liczb
void sortujLiczby(vector<int>& liczby) {
    sort(liczby.begin(), liczby.end());
}

// Funkcja do sprawdzania trafionych liczb
int sprawdzTrafienia(const vector<int>& wylosowaneLiczby, const vector<int>& wybraneLiczby) {
    int trafienia = 0;
    for (int liczba : wybraneLiczby) {
        if (find(wylosowaneLiczby.begin(), wylosowaneLiczby.end(), liczba) != wylosowaneLiczby.end()) {
            trafienia++;
        }
    }
    return trafienia;
}

int main() {
	setlocale(LC_ALL, "");
    cout << "Witaj w programie do gry w Lotto i Multi Multi!\n";
    cout << "Autor: Twój autor\n";
    
    char wybor;
    do {
        cout << "\nWybierz gre:\n";
        cout << "1. Lotto\n";
        cout << "2. Multi Multi\n";
        cout << "0. Wyjscie\n";
        cout << "Wybor: ";
        cin >> wybor;
        
        switch (wybor) {
            case '1': {
                const int iloscLiczb = 6;
                const int minLiczba = 1;
                const int maxLiczba = 49;
                
                vector<int> wylosowaneLiczby;
                vector<int> wybraneLiczby;
                
                cout << "\nWybrales gre Lotto.\n";
                cout << "Wybierz " << iloscLiczb << " unikalne liczby od " << minLiczba << " do " << maxLiczba <<endl;
				wybraneLiczby = wybierzLiczby(iloscLiczb, minLiczba, maxLiczba);
                sortujLiczby(wybraneLiczby);

                cout << "\nWylosowane liczby to:\n";
                for (int i = 0; i < iloscLiczb; i++) {
                    int liczba = losujLiczbe(minLiczba, maxLiczba);
                    wylosowaneLiczby.push_back(liczba);
                }
                sortujLiczby(wylosowaneLiczby);
                for (int liczba : wylosowaneLiczby) {
                    cout << liczba << " ";
                }

                int trafienia = sprawdzTrafienia(wylosowaneLiczby, wybraneLiczby);
                cout << "\nLiczba trafien: " << trafienia << "\n";
                break;
            }
            case '2': {
                const int iloscLiczb = 10;
                const int minLiczba = 1;
                const int maxLiczba = 80;

                vector<int> wylosowaneLiczby;
                vector<int> wybraneLiczby;

                cout << "\nWybrales gre Multi Multi.\n";
                cout << "Wybierz " << iloscLiczb << " unikalne liczby od " << minLiczba << " do " << maxLiczba << ":\n";
                wybraneLiczby = wybierzLiczby(iloscLiczb, minLiczba, maxLiczba);
                sortujLiczby(wybraneLiczby);

                cout << "\nWylosowane liczby to:\n";
                for (int i = 0; i < iloscLiczb; i++) {
                    int liczba = losujLiczbe(minLiczba, maxLiczba);
                    wylosowaneLiczby.push_back(liczba);
                }
                sortujLiczby(wylosowaneLiczby);
                for (int liczba : wylosowaneLiczby) {
                    cout << liczba << " ";
                }

                int trafienia = sprawdzTrafienia(wylosowaneLiczby, wybraneLiczby);
                cout << "\nLiczba trafien: " << trafienia << "\n";
                break;
            }
            case '0':
                cout << "\nDziekujemy za skorzystanie z programu. Do widzenia!\n";
                break;
            default:
                cout << "\nNiepoprawny wybor. Sprobuj ponownie.\n";
                break;
        }
    } while (wybor != '0');

    return 0;
}
