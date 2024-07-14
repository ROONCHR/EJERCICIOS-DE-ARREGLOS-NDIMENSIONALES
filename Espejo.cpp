#include <iostream>
using namespace std;

int main(){
	int matrizA[5][5]={
		{1,2,3,4,5},
		{6,7,8,9,1},
		{2,3,4,5,6},
		{7,8,9,1,2},
		{3,4,5,6,7}
	};
	
	int tam=4;
	for(int i=0;i<5;i++){
		tam=4;
		for(int j=0;j<3;j++){
			int aux;
			aux=matrizA[i][j];
			matrizA[i][j]=matrizA[i][tam];
			matrizA[i][tam]=aux;
			tam--;
		}
		
	}
	cout<<"Matriz Espejo: "<<endl<<endl;
	for(int i= 0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
