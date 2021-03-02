#ifndef _Quiksort
#define _Quiksort






int mitad(int arre[], int pinicial, int pfinal){
	
	return arre[(pinicial+pfinal)/2];
	
	
}

void ordenar(int arre[], int pinicial, int pfinal){
	int i = pinicial;
	int j = pfinal;
	int temp;
	int piv = mitad(arre, pinicial, pfinal);
	
	do{
		while(arre[i]<piv){
			i++;
		}
		while(arre[j]>piv){
			j--;
		}
		if(i<=j){
			temp = arre[i];
			arre[i] = arre[j];
			arre[j] = temp;
			i++;
			j--;
		}
		
		
		
		
	}while(i<=j);
	
	if(pinicial<j)
		ordenar(arre, pinicial, j);
	if(i<pfinal)
		ordenar(arre, i, pfinal);
	
	
	
}



#include  "Quiksort.h"
#endif
