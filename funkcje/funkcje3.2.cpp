#include <iostream>
using namespace std; 
float pole(float r){
	return 4*3.14 * r *r;
} 
float objetosc(float r){
	return (4*3.14 * r *r * r)/3;
}

int main(){
	float r; 
	
	cout << "Podaj dlugsoc r: " <<endl;
	cin >> r; 
	
	cout << "Pole wynosi: "<< pole(r) <<endl; 
	cout << "Objetosc wynosi: "<< objetosc(r) <<endl; 
	
return 0;
}
