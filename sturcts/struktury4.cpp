#include <iostream>
#include <cstring>
using namespace std; 

	struct Employee { 
		string firstName, secondName, state; 
	};

int main() { 

	Employee *wsk;
	wsk = new Employee;
	
	cout << "Podaj dane pracownika: " << endl;
	
	cout << "Imie: "; 
	cin >> wsk->firstName;
	
	cout << "Nazwisko: "; 
	cin >> wsk->secondName;
	
	cout << "Stanowisko: ";
	cin >> wsk->state;
	
	cout <<endl;
	cout << "Dane pracownika" << endl;
	
	cout << "Imie: " << wsk->firstName << endl;
	cout << "Nazwisko: " << wsk->secondName << endl;
	cout << "Stanowisko: " << wsk->state << endl;
	
	delete wsk; 
	
return 0; 
}
