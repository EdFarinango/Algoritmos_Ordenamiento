#include<iostream>
#include<fstream>
using namespace std;


//Algoritmo de busqueda por interpolacion.
void impirmirElementos(int a[], int n);
void algoritmoInterpolacion (int a[], int n);
int main(){
	int arr[7]={5, 9, 3, 8, 1, 6, 7};
	
	
	cout<<"arreglo original"<<endl;
	
	impirmirElementos (arr,7);
	algoritmoInterpolacion (arr, 7);
	
	
	
	
	
	
	return 0;
}

void impirmirElementos(int a[], int n){
	
	ofstream interpolacion;
	interpolacion.open("BusquedaInterpolacion.txt", ios::out);
	interpolacion<<"arreglo original"<<endl;
	
    for(int i=0; i<n; i++)
    {
        cout<<"|"<<a[i]<<"|";
        interpolacion<<"|"<<a[i]<<"|";
    }
}


void algoritmoInterpolacion (int a[], int n){
	int primero=0;
	int ultimo=n-1;
	int medio =0;
	int control=0;
	int num = 5;
	int pos;
	cout<<"\n El valor a buscar es: "<<num<<endl;
	while(a[primero] !=num && control<=5){
		medio = primero + ((num-a[primero])*(ultimo-primero))/ (a[ultimo]-a[primero]);
		
		if(a[medio]<num){
			
			primero = medio+1;
		}else if (a[medio]>num){
			ultimo = medio-1;
		}else{
			primero = medio;
		}
		control++;
		
	}
	if (a[primero]==num){
			cout<<"Elemento encontrado"<<endl;
			primero = pos;
			cout<<"El numero: "<<num<<" se encuentra en la posicion # "<<medio+1<<" del arreglo"<<endl;
		}else{
		cout<<"Elemento no encontrado"<<endl;
		}
	
}

