#include <iostream>

struct Pracownik{
	int legitymacja;
	char imie[20];
	char nazwisko[20];
	char plec[20];
};
void pobierzDane(Pracownik&);
void wyswietlDane(const Pracownik&);

using namespace std;
int main()
{
	Pracownik pracownik;
	
	cout << "Wprowadz dane wejsciowe: " <<endl;
	pobierzDane(pracownik);
	
	cout << "\n\nWprowadzone dane: " <<endl;
	wyswietlDane(pracownik);
	
	
return 0;	
} 
void pobierzDane(Pracownik& p){
	cout << "numer legitymacji sluzbowej = ";
		cin >> p.legitymacja;
	cout << "imie = ";
		cin >> p.imie;
	cout << "nazwisko = ";
		cin >> p.nazwisko;
	cout << "plec = ";
		cin >> p.plec;
}
void wyswietlDane(const Pracownik& p) {
	cout << "Numer legitymacji sluzbowej: " <<p.legitymacja << endl;
	cout << "Imie: " <<p.imie << endl;
	cout << "Nazwisko: " <<p.nazwisko << endl;
	cout << "Plec: "<<p.plec <<endl;
}
