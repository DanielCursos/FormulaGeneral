#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void mostrar();
void menu();
void movarriba();
void movabajo();
void movderecha();
void movizquierda();
bool compruebaresultado();

int cuadro[3][3]={{1,2,3},{4,5,6},{7,0,8}};
int posi=2;
int posj=1;

int main(){
	menu();
	


	return 0;
}

void mostrar(){
	for(int i=0;i<3;i++){		
		for(int j=0;j<3;j++){
			cout<<"["<<cuadro[i][j]<<"]";
		}
		cout<<"\n";
	}	
}


void menu(){
	
	
	char movimiento;
	bool gana=true;
	do{
		cout<<"Haz un movimiento \n\n";
		mostrar();
		cin>>movimiento;
		
		switch(movimiento){
			case 'w':
			case 1:{
				movarriba();
				break;
			}
			case 's':
			case 2:{
				movabajo();
				break;
			}
			case 'd':
			case 3:{
				movderecha();
				break;
			}
			case 'a':
			case 4:{
				movizquierda();
				break;
			}
			default:{
				cout<<"\nInvalido\n";
				system("pause");
				break;
			}
				
		}

		system("cls");

	}while(compruebaresultado());
	
	cout<<"\n!!!!Ganaste!!!!";
	
}

void movarriba(){
	if(posi>0){
	
		cuadro[posi][posj]=cuadro[posi-1][posj];
		cuadro[posi-1][posj]=0;
		posi=posi-1;
		
	}else{
		cout<<"\nmovimiento invalido\n";
		system("pause");
	}
}

void movabajo(){
	if(posi<2){
	
		cuadro[posi][posj]=cuadro[posi+1][posj];
		cuadro[posi+1][posj]=0;
		posi=posi+1;
		
	}else{
		cout<<"\nmovimiento invalido\n";
		system("pause");
	}
}

void movderecha(){
	if(posj<2){	
		cuadro[posi][posj]=cuadro[posi][posj+1];
		cuadro[posi][posj+1]=0;
		posj=posj+1;
		
	}else{
		cout<<"\nmovimiento invalido\n";
		system("pause");
	}
}

void movizquierda(){
	if(posj>0){
	
		cuadro[posi][posj]=cuadro[posi][posj-1];
		cuadro[posi][posj-1]=0;
		posj=posj-1;
		
	}else{
		cout<<"\nmovimiento invalido\n";
		system("pause");
	}
}

bool compruebaresultado(){
	int resultado[3][3]={{1,2,3},{4,5,6},{7,8,0}};
	bool resuelto=false;
	for(int i=0;i<3;i++){
		for(int j=0; j<3;j++){
			if(cuadro[i][j]!=resultado[i][j]){
			
			resuelto=true;
			break;
		}
		}
		
	}
	return resuelto;
}
