#include <iostream>
using namespace std; 

float pole(float a, float b, float c) {
	return 2*a*b + 2*b*c + 2*a*c;
}
float objetosc(float a, float b, float c){
	return a*b*c;
}
float obwod (float a, float b, float c){
	return 4*a + 4*b + 4*c; 
}

int main (){
float a, b, c; 
cout << "Podaj dlugosc krawedzi a: " <<endl;
	cin >> a;
cout << "Podaj dlugosc krawedzi b: " <<endl;
	cin >> b; 
cout << "Podaj dlugosc krawedzi c: " <<endl;
	cin >> c;

cout <<endl;
cout <<"Pole wynosi: " << pole(a,b,c) <<endl;
cout <<"Objetosc wynosi: " << objetosc(a,b,c) <<endl;
cout <<"Obwod wynosi: " << obwod(a,b,c) <<endl;

return 0;
}
