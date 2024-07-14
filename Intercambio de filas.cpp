#include <iostream>
using namespace std;

int main(){
	int matrizA[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
		
	};
	int fila=0;
	int fila2=2;
	
	for(int i=0;i<4;i++){
		if(i==fila){
			for(int j=0;j<4;j++){
				int aux;
				aux=matrizA[i][j];
				matrizA[i][j]=matrizA[fila2][j];
				matrizA[fila2][j]=aux;
				
		
			}
		}
	}
	cout<<"Matriz intercambiada: filas --->  "<< fila<< " y "<<fila2<<endl<<endl;
	for(int i= 0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
