#include <iostream>
#include <cmath>
using namespace std; 

void liczby (int liczba, int W[], int &i){
	do {
		W[i] = liczba %2;
		liczba = liczba / 2;
		i++;
	}
	while(liczba!=0);	
}

int main () { 
	int liczba; 
	int i = 0;
	int W[10000];
	cin>>liczba;
		cout <<endl;  
	liczby(liczba, W, i);
	
	for (int x= i-1; x>=0; x--){
		cout << W[x] <<endl; 
	}
}
