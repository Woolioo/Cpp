#include <iostream>
#include <string>
using namespace std; 

struct Employee { 
	string name, secondname, job;
};

int main () { 

	Employee *index;
	index = new Employee;
	
	cout << "Podaj dane pracownika:" << endl;
	cout << "Imie = ";
		cin >> index->name;
	cout << "Nazwisko = ";
		cin >> index->secondname;
	cout << "Stanowisko = ";
		cin >> index->job;
	
	cout << endl;
	
	cout << "Dane pracownika " << endl;
	cout << "Imie: " << index->name << endl;
	cout << "Nazwisko: " << index->secondname << endl;
	cout << "Stanowisko: " << index->job << endl;
	
	delete index; 

return 0;
}
