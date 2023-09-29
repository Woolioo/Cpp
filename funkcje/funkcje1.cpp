#include <iostream>
using namespace std; 

float pole (float a, float h){
	return (a*h)/2;
}
float obwod (float a, float b, float c){
	return (a+b+c);
}

int main()
{
	float a, b, c, h; 
	cout <<"Podaj dlugosc boku a: "<<endl;
		cin >> a;
	cout <<"Podaj dlugosc boku b: "<<endl;
		cin >> b; 
	cout <<"Podaj dlugosc boku c: "<<endl;
		cin >> c;
	cout <<"Podaj dlugosc wysokosci h: "<<endl;
		cin >> h; 

	cout <<endl;
	cout << "Pole wynosi: " <<endl; 
	cout << pole(a,h) <<endl;
	cout << "Obwod wynosi: "<<endl;
	cout << obwod(a,b,c) <<endl;
	
	return 0; 
}

