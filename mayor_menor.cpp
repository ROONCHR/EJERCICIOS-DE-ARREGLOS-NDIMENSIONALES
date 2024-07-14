#include <iostream>
using namespace std;

int main(){
    int matrizA[4][4]={
        {1,2,3,8},
        {4,2,5,13},
        {6,2,7,11},
        {13,1,5,6}
    
    };
    int arreglo[16],cont=0;
    cout<<"En la matriz: "<<endl;
    for(int i=0;i<4;i++){
 		for(int j=0;j<4;j++){
			cout<<matrizA[i][j]<<" ";
			arreglo[cont]=matrizA[i][j];
			cont++;
		}
		cout<<endl;	 
	}
	for(int i=0;i<16;i++){
		for(int j=i+1;j<16;j++){
			if(arreglo[i]>arreglo[j]){
				int aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	int mayor=arreglo[15], menor=arreglo[0];
    
    
    cout<<" Para el mayor: "<<mayor<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matrizA[i][j]==mayor){
                cout<<"fila: "<<i<<" y columna: "<<j<<endl;
            }
        
        }
    
    }
    cout<<" Para el menor: "<<menor<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matrizA[i][j]==menor){
                cout<<"fila: "<<i<<" y columna: "<<j<<endl;
            }
        
        }
    
    }
    return 0;
}
