#include <iostream>
using namespace std;
int main(){
 	int matrizA[4][4]={
	 {1,2,3,8},
	 {4,5,6,6},
	 {7,8,9,4},
	 {15,1,14,2}
	 };
 	int matrizB[4][4]={
	 {9,8,7,6},
	 {6,5,4,4},
	 {3,2,1,8},
	 {10,11,12,13}
	 };
	int suma=0;

 	for(int i=0;i<4;i++){	
 			suma=suma+(matrizA[i][i]+matrizB[i][i]);
	}
		 	 

	cout<<"La suma de las diagonales de las matriceas A y B es: "<<suma;
	
 	return 0;
 }
