#include <iostream>
#include <string>
using namespace std;

struct Pracownik {
 	string imie;
 	string nazwisko;
 	unsigned int nr_ewid;
};

int main() {

 Pracownik pracownik1 = {"Jan", "Kowalski", 1234};

 cout << pracownik1.imie << endl;
 cout << pracownik1.nazwisko << endl;
 cout << pracownik1.nr_ewid << endl;
 
 cout<<endl;

 Pracownik pracownik2 {"Jan", "Nowak", 2345}; 
 cout << pracownik2.imie << endl;
 cout << pracownik2.nazwisko << endl;
 cout << pracownik2.nr_ewid << endl;

 
return 0;
} 
