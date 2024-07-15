#include <iostream>
using namespace std;
int main(){
	int matrizA[5][5]={
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	int f=5;
	int c=5;
	int fila=0;
	int columna=4;
	int x=0,y=1,l=0;
	
	cout<<"Programa que lee de forma espiral una matriz de 5x5: "<<endl;
	while(f>0){
		
		for(int i=0;i<f;i++){
			cout<<matrizA[fila][i+x]<<" , ";
			
		}
		for(int i=0;i<f-2;i++){
			cout<<matrizA[i+y][columna]<<" , ";
			
		} 
		if(f>1){
		
		for(int i=f-1;-1<i;i--){
			cout<<matrizA[columna][i-x]<<" , ";
		}
		for(int i=f-1;-1<i-2;i--){
			cout<<matrizA[i-y][fila]<<" , ";
		}
		fila=fila+1;
		columna=columna-1;
		}
		x++;
		y++;

		f=f-2;
		
	}
	
	
	
	
	return 0;
}
