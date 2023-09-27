#include <iostream>
#include <string>
using namespace std;

struct Data {
 	unsigned int dd, mm, rr;
};

struct Uczen {
 	string imie;
 	string nazwisko;
 	unsigned int nr_ewid;
	 Data data_urodzenia;
	 unsigned short oceny[3];
};
int main() {

Uczen uczen = {"Jan", "Kowalski", 1234, {30, 10, 2000}, {3, 4, 5}};

cout << uczen.imie << endl;
cout << uczen.nazwisko << endl;
cout << uczen.nr_ewid << endl;

cout << uczen.data_urodzenia.dd << endl;
cout << uczen.data_urodzenia.mm << endl;
cout << uczen.data_urodzenia.rr << endl;

cout << uczen.oceny[0] << endl;
cout << uczen.oceny[1] << endl;
cout << uczen.oceny[2] << endl;

return 0;
}
