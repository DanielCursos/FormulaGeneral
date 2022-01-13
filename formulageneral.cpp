#include<iostream>
#include<math.h>

using namespace std;

int main(){ 
	float a =0;
	float b =0;
	float c=0;
	cout<<"Ingrese A\t";
	cin>>a;
	cout<<"Ingrese B\t";
	cin>>b;
	cout<<"Ingrese c\t";
	cin>>c;

	float resultado=((-b)+sqrt((pow(b,2)-(4*(a*c)))))/(2*a);
	float resultado2=((-b)-sqrt((pow(b,2)-(4*(a*c)))))/(2*a);
	
	cout<<"\n\n";
	cout<<"Resultado 1: "<<resultado;
	cout<<"\nResultado 2: "<<resultado2;
	return 0;
}


//christpher3666@gmail.com
//cin
//getline
//2961161813
//a^2+2ab+b^2


