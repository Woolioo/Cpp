#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cstdlib>

using namespace std;

// Autor: Tw�j autor
// Opis: Prosty program do gry w Lotto i Multi Multi

// Funkcja do losowania liczby pseudolosowej z zakresu [min, max]
int losujLiczbe(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Funkcja do wybierania unikalnych liczb przez u�ytkownika
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
    
    sort(wybraneLiczby.begin(), wybraneLiczby.end());
    
    return wybraneLiczby;
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
    cout << "Witaj w programie do gry w Lotto i Multi Multi!\n";
    cout << "Autor: Tw�j autor\n";
    
    char wybor;
    do {
        cout << "\nWybierz gre:\n";
        cout << "1. Lotto\n";
        cout << "2. Multi Multi\n";
        cout << "0. Wyjscie\n";
        cout << "Wybor: ";
        cin >> wybor;
        
        system("cls"); // Wyczyszczenie okna programu
        
        switch (wybor) {
            case '1': {
                const int iloscLiczb = 6;
                const int minLiczba = 1;
                const int maxLiczba = 49;
                
                vector<int> wylosowaneLiczby;
                vector<int> wybraneLiczby;
                
                cout << "\nWybrales gre Lotto.\n";
                cout << "Wybierz " << iloscLiczb << " unikalne liczby od " << minLiczba << " do " << maxLiczba << ":\n";
                wybraneLiczby = wybierzLiczby(iloscLiczb, minLiczba, maxLiczba);
                
                cout << "\nWybrane liczby:\n";
                for (int liczba : wybraneLiczby) {
                    cout << liczba << " ";
                }
                
                cout << "\n\nWylosowane liczby to:\n";
                for (int i = 0; i < iloscLiczb; i++) {
                    int liczba = losujLiczbe(minLiczba, maxLiczba);
                    wylosowaneLiczby.push_back(liczba);
                }
                sort(wylosowaneLiczby.begin(), wylosowaneLiczby.end());
                for (int liczba : wylosowaneLiczby) {
                    cout << liczba << " ";
                }
                
                int trafienia = sprawdzTrafienia(wylosowaneLiczby, wybraneLiczby);
                cout << "\n\nLiczba trafien: " << trafienia << "\n";
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
                
                cout << "\nWybrane liczby:\n";
                for (int liczba : wybraneLiczby) {
                    cout << liczba << " ";
                }
                
                cout << "\n\nWylosowane liczby to:\n";
                for (int i = 0; i < iloscLiczb; i++) {
                    int liczba = losujLiczbe(minLiczba, maxLiczba);
                    wylosowaneLiczby.push_back(liczba);
                }
                sort(wylosowaneLiczby.begin(), wylosowaneLiczby.end());
                for (int liczba : wylosowaneLiczby) {
                    cout << liczba << " ";
                }
                
                int trafienia = sprawdzTrafienia(wylosowaneLiczby, wybraneLiczby);
                cout << "\n\nLiczba trafien: " << trafienia << "\n";
                break;
            }
            case '0':
                cout << "\nDziekujemy za skorzystanie z programu. Do widzenia!\n";
                break;
            default:
                cout << "\nNiepoprawny wybor. Sprobuj ponownie.\n";
                break;
        }
        
        system("pause"); // Zatrzymanie programu, aby u�ytkownik m�g� zobaczy� wyniki
        system("cls"); // Wyczyszczenie okna programu
        
    } while (wybor != '0');
    
    return 0;
}
