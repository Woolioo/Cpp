#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


void szukaj(int &szukana){
	cout <<"Podaj wartosc szukanej: " <<endl;
	cin>>szukana; 
}
void elementy(int T[], int n){  
	for (int i=0; i<n; i++){
		T[i] = rand() % (n +1); 
		cout << T[i] <<endl; 
	}
}
bool sprawdz(int n, int T[], int szukana){
	int i =0; 
	while(i<n && T[i]!=szukana ){
		i++; 
	}
	if (i==n){
		return false; 
	}
	else{
		return true;
	}
}


int main (){
srand(time(NULL));

	int szukana; 
	int n;
	cout << "Podaj ilosc elementow w tablicy: " <<endl;
	cin >> n;
	int T[n];

szukaj(szukana);
cout<<endl;
elementy(T, n);
cout<<endl; 

//int test = sprawdz(n, T, szukana);
//cout << test; 

if(sprawdz(n, T, szukana)){
	cout << "TAK" <<endl;
}
else {
	cout << "NIE" <<endl;
}

return 0; 
}
