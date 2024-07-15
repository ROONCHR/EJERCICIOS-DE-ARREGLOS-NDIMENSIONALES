#include <iostream>
using namespace std;

int main(){
	int orden;
	cout<<"--------PROGRAMA QUE GENERA UNA MATRIZ LATINA------"<<endl<<endl<<"Ingrese el orden de la matriz: ";
	cin>>orden;
	int matriz[orden][orden];
	for(int i=0;i<orden;i++) {
		
		if(i==0){
			for(int j=0;j<orden;j++){
				matriz[i][j]=j+1;
				matriz[i+1][j]=matriz[i][j];
			}

		}else{
			int cam=matriz[i][orden-1];
			for(int j=orden-1;0<j;j--){
				matriz[i][j]=matriz[i][j-1];
				matriz[i+1][j]=matriz[i][j];	
			}
			matriz[i][0]=cam;
			matriz[i+1][0]=cam;
		}
	}
	
	for(int i=0;i<orden;i++){
		for (int j=0;j<orden;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

