#include <iostream>
using namespace std;
int main(){
 	int matrizA[3][3]={
	 {1,2,3},
	 {4,5,6},
	 {7,8,9}
	 };
 	int matrizB[3][3]={
	 {9,8,7},
	 {6,5,4},
	 {3,2,1}
	 };
	int producto[3][3];
 	int suma;
 	for(int i=0;i<3;i++){
 		int suma=0;
 		for(int j=0;j<3;j++){
 			suma=0;
 			for(int k=0;k<3;k++){
			 
 			suma=suma+(matrizA[i][k]*matrizB[k][j]);
 			
 			}
 			producto[i][j]=suma;
		 }
		 
		 
	}
	cout<<"Matriz A  +  MatrizB    =    Producto "<<endl<<endl;
	for(int i=0;i<3;i++){
		
 		for(int j=0;j<3;j++){
 			cout<<matrizA[i][j]<<" ";		
 		}
 		if(i==1){
 			cout<<"    +   ";
		}else{
			cout<<"        ";
		}
 		
		for(int j=0;j<3;j++){
 			cout<<matrizB[i][j]<<" ";		
 		}
 		if(i==1){
 			cout<<"    =   ";
		}else{
			cout<<"        ";
		}
		for(int j=0;j<3;j++){
 			cout<<producto[i][j]<<" ";		
 		} 
		 cout<<endl;
	}
	
 	return 0;
 }
