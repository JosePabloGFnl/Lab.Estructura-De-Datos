#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 1;
	i=0;
	while((band=='F') &&(i<5)){
		if (a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero no existe"<<endl;
	}
	else if (band == 'V'){
		
		cout<<"El numero ha sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	getche();
	return 0;
}
