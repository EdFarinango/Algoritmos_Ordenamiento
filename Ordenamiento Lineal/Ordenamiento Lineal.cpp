//Eduardo Farinango GR3 

#include <iostream>
using namespace std;

int busqueda(int arr[], int t, int dato);
void ingresarElementosArreglo(int arr[], int t);
void imprimirElementosArreglo(int arr[], int t);
int solicitarNumero();


int main() 
{

  int a[5]={};
  int valoresArreglo;
  cout<<"En una caja con 5 posiciones puedes ingresar numero enteros y saber en que ubucacion se guardo"<<endl;
  cout<<"Ingrese los valores del arreglo"<<endl;
  ingresarElementosArreglo(a, valoresArreglo);
  cout<<"Los valores ingresados en el arreglo son:"<<endl;
  imprimirElementosArreglo(a, valoresArreglo);
  
  int dato=solicitarNumero();
  
  if(busqueda(a,5,dato)==3)
  {
    cout<<"ELEMENTO NO ENCONTRADO";
  }
  else 
  {
    cout<<"ELEMENTO ENCONTRADO EN LA POSICIoN "<<busqueda(a,5,dato);
  }
  
}


int busqueda(int arr[], int t, int dato)
{
  int i;

  for( i=0 ; i<=5 ; i++)
  {
      
    if(arr[i]==dato)
    {
      return i;
    }
  }
  
  return 3;
}

void ingresarElementosArreglo(int arr[], int t)
{
	
	for(int i=1; i<=5; i++){
		cout<<"puesto #: "<<i<<endl;
		cin>>t;
		arr[i]=t;
	}


}


void imprimirElementosArreglo(int arr[], int t)
{
	for(int i=1; i<=5; i++)
	cout<<arr[i]<<"|";

}

int solicitarNumero()
{
  int n;
  cout<<endl;
  cout<<"ingresa el numero que deseas buscar:";
  cin>>n;
  return n;
}
