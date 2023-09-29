#include <iostream>
#include <vector>
using namespace std; 

double suma (int *tab, double suma) { 
	for (int i= 0; i<10; i++){
		suma+= *(tab+i);} 
		return suma;}

double srednia ( double suma, double srednia){

	srednia = suma / 10;
	return srednia;}
	
int maks (int *tab, int max){ 
	max = *tab;
	 
	for (int i = 0; i <10; i++){
		if (max < *(tab+i)){
		 max = *(tab+i); 
		}
}
return  max;}

int mini (int *tab, int min) {
	min = *tab;
		for (int i = 0; i <10; i++){	
	 	if (min > *(tab+i)){
		min = *(tab+i);
		}
	}
return min;}


int main()
{
	int tab[10]= {1,2,3,4,5,6,7,8,9,10}; 
	double srednia1 = 0; 
	double suma2 = suma(&tab[0], suma2);
	int min3, max4; 
	
	cout << "Srednia: " << srednia (suma2,srednia1) <<endl;
	cout << "Suma: " << suma2 << endl;
	cout << "Min: " << mini (&tab[0], min3) <<endl; 
	cout << "Max: " << maks (&tab[0], max4)<< endl; 
	
return 0; 
}
