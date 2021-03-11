#include <iostream>
#include <fstream>
using namespace std;

void HeapSort(int b[], int n);


int main()
{
	ofstream heapsort;
	heapsort.open("heapsort.txt", ios::out);
    int A[100]={};
	int n = 0;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    cin >> A[i];
	}
	cout<<endl;
	heapsort<<"Arreglo original"<<endl;
	cout<<endl;
	
	for(int i=1;i<=n;i++){
    	cout<<"|"<<A[i]<<"|";
    	heapsort<<"|"<<A[i]<<"|";
	}
    
    
    HeapSort(A,n);
    heapsort<<endl;
    cout<<endl;
    heapsort<<"Arreglo ordenado con Heapsort"<<endl;
    cout<<"El orden es:";
    for(int i=1;i<=n;i++){
    	cout<<A[i];
    	heapsort<<"|"<<A[i]<<"|";	
    	}
    	
    
    
    return 0;
}

void HeapSort(int b[], int n)
{
    int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }

}


