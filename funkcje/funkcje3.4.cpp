#include <iostream>
using namespace std; 

float pole(const int *r){
	return 4*3.14 * *r * *r;
} 
float objetosc(const int *r){
	return (4*3.14 * *r * *r * *r)/3;
}


int main(){ 
	int r;
	cout << "Podaj dlugsoc r: " <<endl;
	cin >> r; 
	
	cout << "Pole wynosi: "<< pole(&r) <<endl; 
	cout << "Objetosc wynosi: "<< objetosc(&r) <<endl; 
	
return 0;
}
