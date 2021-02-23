#include<iostream>
#include<fstream>
using namespace std;

// Ordenamiento por insercion.

int main(){
	ofstream archivo;
	archivo.open("ordenamiento.txt", ios::out);
	int arr1[]={4, 3, 2, 1, 5};
	int i, pos, aux;
	int b =0;
	int c =0;
	cout<<"arreglo original"<<endl;
	archivo<<"arreglo original"<<endl;
	for(int i=0; i<5; i++){
		cout<<arr1[i];
		archivo<<"|"<<arr1[i]<<"|";
		b = b+arr1[i];
		c = i+1;
	}
	
	cout<<endl;
	cout<<"en ese arreglo existen : "<< c <<" Elementos"<<endl;
	cout<<"La suma de los valores del arreglo es: "<< b <<endl;
	archivo<<"en ese arreglo existen : "<< c <<" Elementos"<<endl;
	archivo<<"La suma de los valores del arreglo es: "<< b <<endl;
	for(int i=0; i<5; i++){
		
		pos = i;
		aux = arr1[i];
		while((pos>0)&&(arr1[pos-1]>aux)){
			
			
			arr1[pos] = arr1[pos-1];
			pos--;
			
		}
		
		
	arr1[pos]= aux;	
		
	}
	cout<<"arreglo ordenado"<<endl;
	archivo<<"arreglo ordenado"<<endl;
	
	for(int i=0; i<5; i++){
		
		cout<<arr1[i];
		archivo<<"|"<<arr1[i]<<"|";
		
	}
	
	
	return 0;
}
