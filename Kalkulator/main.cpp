#include <iostream>
#include "Calculator.hpp"

using namespace std; 

int main(int argc, char** argv) {
	
	float x,y; 
	char z; 
	cout << "Podaj znak dzialania: " <<endl; 
	cin>>z; 
	switch(z) { 
	
	case '+':{
		cout << "Podaj dwie liczby ktore maja byc dodane: " <<endl;
		cin >> x >> y;
		cout<<add(x,y)<<endl; 
		break;
	}
	case '-': {
		cout << "Podaj dwie liczby ktore maja byc odjete: " <<endl;
		cin >> x >> y;
		cout<<substract(x,y)<<endl; 
		break;
	} 
	case '*': {
		cout << "Podaj dwie liczby ktore maja byc pomnozone: " <<endl;
		cin >> x >> y;
		cout<<multiply(x,y)<<endl; 
		break;
	}
	case '/': {
		cout << "Podaj dwie liczby ktore maja byc podzielone: " <<endl;
		cin >> x >> y;
		cout<<divide(x,y)<<endl; 
		break;
	}
	case 'p': {
		cout << "Podaj dwie liczby ktore maja byc potegowane: " <<endl;
		cin >> x >> y;
		cout<<power(x,y)<<endl; 
		break;
	} 
	}
	
	return 0;
}
