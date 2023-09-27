#include <iostream>
using namespace std;

struct Pracownik {
 	char imie[20];
 	char nazwisko[20];
 	char stanowisko[30];
};

int main() {
 
 	Pracownik pracownik = {"Jan", "Kowalski", "dyrektor"}; 
 	Pracownik *wsk;
	wsk = &pracownik;

 	cout << "Dane pracownika " << endl;
 	cout << "Imie: " << wsk->imie << endl;
 	cout << "Nazwisko: " << wsk->nazwisko << endl;
 	cout << "Stanowisko: " << wsk->stanowisko << endl;
 	
return 0;
}
