#include <iostream>
#include <fstream>
#include<stdlib.h>
#include<time.h>
//Libreria incluida en la raiz
#include "Quiksort.h"
using namespace std;




int main() {
	int arr[10];
	
	ofstream ordenamiento;
	ordenamiento.open("quicksort.txt", ios::out);
	
	//Ingreso de valores de forma aleatoria.
	srand(time(0));
	for(int i=0; i<10; i++){
		arr[i]= 1+rand()%(50-1);
	}
	ordenamiento<<"\t TALLER CLASE 28"<<endl;
	ordenamiento<<"Algoritmo de ordenamiento QUICKSORT"<<endl;	
	ordenamiento<<"Arreglo Original"<<endl;
	for(int i = 0; i<9; i++){
		ordenamiento<<"|"<<arr[i]<<"|";
		cout<<"|"<<arr[i]<<"|";
	}
	cout<<endl;
	ordenamiento<<"\n Arreglo ordenado con quicksort"<<endl;
	ordenar(arr, 0, 9);
	for(int i = 0; i<9; i++){
		
		ordenamiento<<"|"<<arr[i]<<"|";
		cout<<"|"<<arr[i]<<"|";
	}
	ordenamiento.close();
	return 0;
}


