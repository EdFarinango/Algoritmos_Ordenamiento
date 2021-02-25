#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

void separar(int a[], int posInicial, int posFinal);
void unir(int a[], int pinicial, int pfinal, int medio);

int main(){
	int ord [10];
	//Semilla
	srand(time(0));
	
	ofstream sort;
	sort.open("mergesort.txt", ios::out);
	sort<<"\t Aplicacion del algoritmo MERGESORT"<<endl;

	
	for(int i=0; i<7; i++){
		ord[i]= 1+rand()%(50-2);
		
	}
	
	cout<<endl;
	sort<<"Arreglo original con valores aleatorios"<<endl;
	for(int i=0; i<7; i++){
		cout<<"|"<<ord[i]<<"|";
		sort<<"|"<<ord[i]<<"|";
		
	}
	cout<<endl;
	
	separar(ord, 0, 6);
	
	sort<<endl;
	sort<<"Arreglo ordenado con MERGESORT con valores aleatorios"<<endl;
	for(int i=0; i<7; i++){
		cout<<"|"<<ord[i]<<"|";
		sort<<"|"<<ord[i]<<"|";
	}
	return 0;
}


void separar(int a[], int posInicial, int posFinal){
	int mitad;
	
	if(posInicial< posFinal){
		mitad= (posInicial+posFinal)/2;
		separar(a, posInicial, mitad);
		separar(a, mitad+1, posFinal);
		unir(a, posInicial, posFinal, mitad);
		
	}	
	
}

void unir(int a[], int pinicial, int pfinal, int medio){
	int i, j, k, temporal[pfinal-pinicial +1];
	i = pinicial;
	k = 0;
	j = medio +1;
	
	while(i<= medio && j<= pfinal){
		if(a[i]<a[j]){
			temporal[k] = a[i];
			k++;
			i++;
		}else{
			temporal[k]=a[j];
			k++;
			j++;
		}		
		
		
	}
	while(i<= medio){
		temporal[k] = a[i];
		k++;
		i++;
	}
	while(j <= pfinal){
		temporal[k] = a[j];
		k++;
		j++;
	}
	for(i = pinicial; i<= pfinal; i++){
		a[i] = temporal[i-pinicial];
		
	}
	
}
