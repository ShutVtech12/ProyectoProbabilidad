#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int factorial(int n){
	int factor;
	if (n == 0 ){
		return 1;
	}else{
		for(int i=n; i>=1; i--){
			if(i==n){
				factor=n;
			}else{
				factor = factor * i;
			}
		}
		return factor;
	}
}

int main(){
	int opc, reinicio, elementos, kgrupos, resultado, numero, suma, cantidad;
	char dec;
	reinicio=0;
	while(reinicio!=1){
		cout<<"--------------------------------------------------------------\n";
		cout<<"-------------Proyecto Probabilidad y Estadistica--------------\n";
		cout<<"--------------------------------------------------------------\n";
	
		cout<<"****************COMBINACIONES Y PERMUTACIONES*****************\n\n";
		cout<<"Este programa ayuda a calcular permutaciones y combinaciones\n";
		cout<<"";
	
		cout<<"1.- Combinaciones. \n";
		cout<<"2.- Permutaciones. \n";
		cout<<"Opcion a calcular: ";
		cin>>opc;
		cout<<"--------------------------------------------------------------\n";
		if(opc == 1){
//--------------------------------------------------------------------------------------------------------INICIO COMBINACIONES-------------------------------------------------------
			cout<<"Recuerda que una Combinacion se ocupa cuando el orden NO importa\n";
			cout<<"es decir, AB es igual que BA.\n\n";
			cout<<"Tomaremos como notacion C(n,k) para combinaciones de 'n'\nelementos tomados en grupos de 'k' elementos.\n\n";
			cout<<"         (n)       n!\n";
			cout<<"C(n,k) = ( ) = ---------\n";
			cout<<"         (k)   (n-k)! k!\n\n";
			
			cout<<"Valor para n: ";
			cin>>elementos;
			cout<<"--------------------------------------------------------------\n";
			cout<<"Valor para k: ";
			cin>>kgrupos;
			cout<<"--------------------------------------------------------------\n";
			if(elementos > kgrupos){
				cout<<"         ("<<elementos<<")       "<<elementos<<"!\n";
				cout<<"C(n,k) = ( ) = ---------\n";
				cout<<"         ("<<kgrupos<<")   ("<<elementos<<"-"<<kgrupos<<")! "<<kgrupos<<"!\n\n";
				
				//Calculos del dividendo y del divisor
				cout<<"         ("<<elementos<<")       "<</*Resultado de n!*/0<<"!\n";
				cout<<"C(n,k) = ( ) = ---------\n";
				cout<<"         ("<<kgrupos<<")   "<</*Resultado de (n-k)! * k! */0<<"\n\n";
				
				//Calculos finales, lo que seria de la division
				cout<<"**************************************************************\n\n";
				cout<<"Por lo tanto: \n";
				cout<<"C(n,k) =  "<<resultado<<"\n\n";
				cout<<"**************************************************************\n";
			}else{
				cout<<"**************************************************************\n\n";
				cout<<"Verifica los valores de n y k\n\n";
				cout<<"**************************************************************\n";
			}
//--------------------------------------------------------------------------------------------------------FIN COMBINACIONES----------------------------------------------------------
			cout<<"Hacer otro calculo? (Y-si N-no): ";
			cin>>dec;
			if(dec=='N' || dec=='n'){
				reinicio=1;
			}
			else{
				system("cls");
			}
		}else if(opc == 2){
//--------------------------------------------------------------------------------------------------------INICIO PERMUTACIONES-------------------------------------------------------
			cout<<"Recuerda que una Permutacion se ocupa cuando el orden importa\n";
			cout<<"es decir, AB es diferente a BA.\n\n";
			cout<<"Tomaremos como notacion P(n,k) para permutaciones de 'n'\nelementos tomados en grupos de 'k' elementos, sin repeticion.\n\n";
			cout<<"Ademas, tomaremos como notacion PR(n) para permutaciones de\n'n' elementos con repeticion\n\n";
			cout<<"1.- P(n,k). \n";
			cout<<"2.- PR(n). \n";
			opc = 0;
			cout<<"Opcion a calcular: ";
			cin>>opc;
			cout<<"--------------------------------------------------------------\n";
			if(opc==1){
//*******************************************************************************************************Inicio Permutacion sin repetecion*******************************************************************************************************
			cout<<"Valor para n: ";
			cin>>elementos;
			cout<<"--------------------------------------------------------------\n";
			cout<<"Valor para k: ";
			cin>>kgrupos;
			cout<<"--------------------------------------------------------------\n";
			if(elementos == kgrupos){
				cout<<"Como 'n=k' entonces \n";
				cout<<"P(n,n) = n!\n";
				cout<<"P(n,n) = "<<elementos<<"!\n";
				resultado = factorial(elementos);
				cout<<"**************************************************************\n\n";
				cout<<"Por lo tanto: \n";
				cout<<"P(n,n) = "<<resultado<<"\n\n";
				cout<<"**************************************************************\n";
			}else if(elementos > kgrupos){
				cout<<"           n!\n";
				cout<<"P(n,k) = -----\n";
				cout<<"         (n-k)!\n\n";
				
				cout<<"           "<<elementos<<"!\n";
				cout<<"P(n,k) = -----\n";
				cout<<"         ("<<elementos<<"-"<<kgrupos<<")!\n\n";
				
				//AQUI SE HACEN LOS CALCULOS
				cout<<"          "<</*RESULTADO DE n!*/0<<"\n";
				cout<<"P(n,k) = -----\n";
				cout<<"           "<</*RESULTADO DE (n-k)!*/0<<"\n\n";
				cout<<"**************************************************************\n\n";
				cout<<"Por lo tanto: \n";
				//Se imprime el resultado final
				cout<<"P(n,k) = "<<resultado<<"\n\n";
				cout<<"**************************************************************\n";
			}else{
				cout<<"**************************************************************\n\n";
				cout<<"Verifica los valores de n y k\n\n";
				cout<<"**************************************************************\n";
			}
//*******************************************************************************************************Fin Permutacion sin repetecion*******************************************************************************************************
			}else if(opc==2){
//*******************************************************************************************************Incio Permutacion CON repetecion*******************************************************************************************************
				cout<<"Para permutaciones con repetecion tenemos la siguiente ecuacion\n";
				cout<<"              n!\n";
				cout<<"PR(n) = ---------------\n";
				cout<<"        (n1*n2*...*nr)!\n\n";
				cout<<"Donde: \n";
				cout<<"n = n1 + n2 + ... + nr\n\n";
				cout<<"Valor para n: ";
				cin>>elementos;
				cout<<"--------------------------------------------------------------\n";
				cout<<"Cantidad de subn's': ";
				cin>>cantidad;
				cout<<"--------------------------------------------------------------\n";
				int nr[elementos];
				suma=0;
				for(int i=0; i<cantidad; i++){
					numero=0;
					cout<<"Valor para n"<<i<<": ";
					cin>>numero;
					suma = suma+numero;
					cout<<"--------------------------------------------------------------\n";
					nr[i]=numero;
				}
				if(suma==elementos){
					cout<<"              "<<elementos<<"!\n";
					cout<<"PR(n) = ---------------\n";
					cout<<"       (";
					for(int i=0; i<cantidad; i++){
						if(i==cantidad-1){
							cout<<nr[i];
						}else{
							cout<<nr[i]<<"*";
						}
					}
					cout<<")!\n\n";
					
					//AQUI SE HACEN LOS CALCULOS
					cout<<"               "<</*Resultado de n!*/0<<"\n";
					cout<<"PR(n) = ---------------\n";
					cout<<"        "<</*Resultado de la multiplicacion!*/0<<"\n\n";
					
					cout<<"**************************************************************\n\n";
					cout<<"Por lo tanto: \n";
					//Se imprime el resultado final
					cout<<"PR(n) = "<<resultado<<"\n\n";
					cout<<"**************************************************************\n";
				}else{
					cout<<"**************************************************************\n\n";
					cout<<"Verifica los valores de n y las subn's'\n\n";
					cout<<"**************************************************************\n";
				}
				
//*******************************************************************************************************Fin Permutacion CON repetecion*******************************************************************************************************
			}
//--------------------------------------------------------------------------------------------------------FIN PERMUTACIONES----------------------------------------------------------
			cout<<"Hacer otro calculo? (Y-si N-no): ";
			cin>>dec;
			if(dec=='N' || dec=='n'){
				reinicio=1;
			}
			else{
				system("cls");
			}
			
		}else{
			cout<<"//////////////**Opcion no valida, reintente**//////////////\n\n\n";
			system("cls");
		}
	}
	system("PAUSE");
    return 0;
}
