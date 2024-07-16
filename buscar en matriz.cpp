#include <iostream>
using namespace std;

int main(){
    int matrizA[3][3]={
        {1,2,3},
        {4,2,5},
        {6,2,7}
    
    };
    
    for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;	 
	}
	int x=2;
	cout<<"Ingrese el numero a buscar en la matriz: ";
    cin>>x;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrizA[i][j]==2){
                cout<<"fila: "<<i<<" y columna: "<<j<<endl;
            }
        
        }
    
    }
    return 0;
}
