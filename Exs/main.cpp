#include<iostream>
using namespace std;


int main(){
	double igualX =0;
	double ax=0; 
	double cx=0;
	int signo;
	double paso = 0.01;	
	
	cout<<"Ingrese a que es igual la primera ecuacion: ";
	cin>>igualX;
	cout<<"Ingrese primer termino para ecuacion 1: ";
	cin>>ax;
	cout<<"Ingrese el segundo valor de la ecuacion: ";
	cin>>cx;
	cout<<"Ingrese el signo de la operacion:"<<endl;
	cout<<"1. Suma:"<<endl;
	cout<<"2. Resta:"<<endl;
	cout<<"OPCION: ";
	cin>>signo;
	
	switch(signo){
		
		case 1: cout<<"Ecuacion: "<< ax<<"x"<<"+"<<cx<<"="<<igualX<<endl;
			
			for (double x = -1000; x <1000; x = x + paso){
	        	if (igualX > ax * x + cx  & igualX< ax* (x+paso) + cx ){
			    	cout<<"La solución es: x=" << x<<endl; 
				}
		}
			    	
			break;
		case 2: cout<<"Ecuacion: "<< ax<<"x"<<"-"<<cx<<"="<<igualX<<endl;
		
			for (double x = -1000; x <1000; x = x + paso){
	        	if (igualX > ax * x - cx  & igualX< ax* (x+paso) - cx ){
			    	cout<<"para esta ecuacion: x=" <<x<<endl;
				}
			}
			    	
			break;
		default:
			cout<<"No existe esa opcion"<<endl;
			
			
		  
	//cout<<"La solución es: x=" << cy <<endl;
	
	}
	
	return 0;
}
