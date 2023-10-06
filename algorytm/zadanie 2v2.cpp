#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std; 
setlocale(LC_ALL, "Polish");
void wczytaj (int T[], int n, int szukana){
	for(int i=0; i<n; i++){
			T[i] = rand() % 101;
			cout << T[i] <<endl;
	}
	T[n] = szukana; 
}
bool sprawdz(int n, int T[], int szukana){
	int i =0; 
	while(  T[i]!=szukana ){
		i++; 
	}
	if (i<n){
		return true; 
	}
	else{
		return false;
	}
}


int main(){
	srand(time(NULL));
	
	cout <<"Podaj iloœæ elementow w tablicy: " <<endl;
	int n; 
	cin>>n; 
	
	int T[n+1];
	int szukana; 
	
	cout <<"Podaj wartosc szukana: "<<endl;
	cin >> szukana;	
	wczytaj(T, n, szukana);
	
	if(sprawdz(n, T, szukana)){
	cout << "TAK" <<endl;
	}
	else {
	cout << "NIE" <<endl;
	}

return 0; 
	
}
