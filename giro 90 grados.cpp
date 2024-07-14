#include <iostream>
using namespace std;

int main(){
	int matrizA[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,1,2,3},
		{4,5,6,7}
	};
	int matrizX[4][4];
	for(int i=0;i<4;i++){
		int x=3;
		for(int j=0;j<4;j++){
			matrizX[i][j]=matrizA[x][i];
			x--;
		}
		
	}
	cout<<"MatrizA: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"MatrizA girada 90 grados: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matrizX[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
