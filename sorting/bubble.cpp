//Utworz program ktorego dzialanie bedzie nastepujace za 
//pomoca funkcji pustej void uzupelnij tabele jednowymiarowa 
//o rozmiarze "n" liczbami losowymi calkowitymi od 0 do 100
//Nastepnie utworz funkcje pusta void umozliwiajaca 
//posortowanie tablicy metoda babelkowa 
//wykorzystujac petle for wypisz posortowane elementy tablicy 
//na ekranie
  
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std; 

void tablica(int tab[], int n){
	for (int i=0; i<n; i++){
		tab[i] = rand() % 100;
		cout <<tab[i] <<endl; 
	}
}

void bubble(int tab[], int &n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if (tab[j] > tab[j+1])
			swap(tab[j], tab[j+1]); 
	}
}
for (int i=0; i<n; i++){
		cout <<tab[i] <<endl; 
	}
}
int main(){ 
system("title Bubble sort");
srand(time(NULL));
int n;
cout << "Podaj liczbe elementow tablicy: " <<endl;
cin >>n;
int tab[n];

cout <<"Przed sortowaniem: " <<endl;
tablica (tab,n);
cout <<endl;
cout <<"Po sortowaniu: " <<endl; 
bubble (tab, n);

return 0;
} 
