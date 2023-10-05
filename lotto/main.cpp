/*

*/

#include <iostream>
#include <vector>				
#include <algorithm>

using namespace std;

int losujLiczbe(int min, int max) {
    int liczba;
    for (int i = 0; i < 10; i++) {
        liczba = min + rand() % (max - min + 1);
    }
    return liczba;
}

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

void sortujLiczby(vector<int>& liczby) {
    sort(liczby.begin(), liczby.end());
}

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
	
	system("title Lotto i Multi Multi ");
	setlocale(LC_ALL,"");
    cout << "Witaj w programie do gry w Lotto i Multi Multi!\n";
    cout << "Autor: Micha³ Sobolewski\n";
    
    char wybor;
    do {
        cout << "\nWybierz gre:\n";
        cout << "1. Lotto\n";
        cout << "2. Multi Multi\n";
        cout << "0. Wyjscie\n";
        cout << endl;
        cout << " Wybor: ";
        cin >> wybor;
        
        system("cls"); 
        
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
                sortujLiczby(wybraneLiczby);
                
                cout << "\nWybrane liczby:\n";
                for (int liczba : wybraneLiczby) {
                    cout << liczba << " ";
                }
                
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
                
                cout << "\nWybrane liczby:\n";
                for (int liczba : wybraneLiczby) {
                    cout << liczba << " ";
                }
                
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
                
                if (trafienia==6) { 
                	cout << "GRATULACJE!!! TRAFI£EŒ SZÓSTKÊ!!!" << endl;
				}
            }
            case '0':
                cout << "\nDziekujemy za skorzystanie z programu. Do widzenia!\n";
                break;
            default:
                cout << "\nNiepoprawny wybor. Sprobuj ponownie.\n";
                break;
        }
        
        system("pause"); 
        system("cls"); 
        
    } while (wybor != '0');
    
    return 0;
}
