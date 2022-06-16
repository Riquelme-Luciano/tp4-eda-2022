#include <iostream>
#include <stdlib.h>
using namespace std;

const int N=4;

struct Pila {
	
	int tope=-1;
	int datos[N];
	
	void push(int elemento) {
			if(tope<N) {
				tope++;
				datos[tope]=elemento;
				cout<<"elemento insertado: "<<elemento<<", posicion "<<tope<<endl;
			}else {
				cout<<"La pila esta llenissima!"<<endl;	
			}
		}
			
	bool pilaLlena() {	
			bool estado=false;
			
			if(tope==N-1) {
				estado=true; 					
			}   
			return estado;
		}
		
	bool pilaVacia() {	
			bool estado=false;
			  
			if(tope==-1)     //Verdadero 
				estado=true; //si vacia
			
			return estado;
		}
	
	int verTope() {
		return datos[tope];//peek o mirar
	}
		
	void pop() {
		
		if(pilaVacia()){
			cout<<"La pila esta vacia"<<endl;
		}
		else {
			tope--;
	    	cout<<"Elemento removido"<<endl;
		}
	}
	
	int size() {
		return N;
	}
	
	bool contieneE(int elemento) {
		bool contiene;
		
		while(!pilaVacia()) {
			if(verTope()==elemento) 
				contiene=true;
			else
				contiene=false;
			pop();
		}
		return contiene;
	}		
};

//void push(int);
//bool pilaLlena();
//int tope;
//int datos[N];

int main() {
	Pila pilaA,pilaB,pilaC,aux1;
	int opcion;
	int num,num2;
	char op;
	
	do {
	cout<<"(1) cargar pila\n(2) pasar pila\n(3) existe el elemento en pilaA?\n(4) invertir fila1\n(5) invertir fila2"
		<<"\n(6) buscar elemento\n(7) salir\n\n eliga opcion: "; cin>>opcion;	
	
	switch(opcion) {
		case 1: 
			system("cls");
			
			if(!pilaA.pilaLlena()) {
				cout<<"Cargar Pila A"<<endl;
				cout<<"--------------"<<endl;	
				cout<<"Ingrese numero: "; cin>>num;
				pilaA.push(num);
				
			} else {
				cout<<"Ya esta llena la pilaA"<<endl;
			}
			
			break;
		
		case 2:
			system("cls"); 
			cout<<"Elementos de pilaA -> pilaB"<<endl;
			cout<<"----------------------------"<<endl;
			
			while(!pilaA.pilaVacia() && (pilaB.pilaVacia() || !pilaB.pilaLlena())) { // si pilaA tiene elementos y pilaB esta vacia o no esta llena 
				pilaA.pop();
				pilaB.push(pilaA.verTope());
			} 
			
			break;
			
		case 3:
			system("cls");
			cout<<"Ingrese elemento a buscar: "; cin>>num2;
			
			if(pilaA.contieneE(num2)) {
				cout<<"Si lo contiene"<<endl;
			} else {
				cout<<"No lo contiene"<<endl;
			}	
					
			break;
		
		case 4:
			system("cls");	
		default:
			cout<<"No ha seleccionado ninguna opcion"<<endl;
			break;
}	
	
	cout<<"si desea continuar presione s:";
	cin>>op;
	
	system("cls");
	
	} while(op=='s' || op=='S');
	
	
	
	return 0;
}


			

			
			
			
			
			
			
			
			
			
			
			
			
