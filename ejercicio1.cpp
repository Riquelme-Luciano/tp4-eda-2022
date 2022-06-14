/*
1.En el menú principal, se cuenta con las siguientes variables: 
pilaA, pilaB, pilaC, aux1 
todos los datos son enteros, y los procedimientos o funciones son los que siguen: 
a.Implemente la estructura Pila de Enteros 
que permita trabajar con variables de tipo Pila.
b.cargaPila, que permita introducir datos en la PilaA 
c.pasaPila, pasa todos los elementos de pilaA a PilaB 
d.contieneE, que recibe un entero “X” y determina si está en la pilaA,
 todos los elementos deben quedar nuevamente en A  
e.SeparaPI, que dada la pilaA con números enteros, coloca en pilaB los 
pares y en PilaC los impares  
f.Invierte1, Dada una Pila A con números, una Pila B y una Pila C vacías,
 pasar los elementos de A a B de manera que queden en el mismo orden que 
 estaban en A. (Se permite utilizar la pila C como auxiliar)
g.Invierte2, que dada una Pila A, una variable X y una Pila Vacía B. 
Pasar los elementos de pilaA a pilaB de manera tal que en pilaB queden
 en el mismo orden que estaban en pilaA   
h.Dada una pila A con números, buscar si existe en A un entero “X”, y 
reemplazarlo por un número “Y”
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

const int N=2;

struct Pila {
	
	int tope=-1;
	int datos[N];
	
	void push(int elemento) {
			if(tope<N){
				tope++;
				datos[tope]=elemento;
				cout<<"push del elemento"<<elemento<<" en la posicion "
				    <<tope<<endl;
			}else{
				cout<<"La pila esta llenissima!"<<endl;	
			}
		}
			
	bool pilaLlena() {	
			bool estado=false;
			
			if(tope==N-1) {
				estado=true; //si esta llena
								//Verdadero 
			}   
			
			return estado;
		}
		
	bool pilaVacia() {	
			bool estado=false;  
			if(tope==-1)     //Verdadero 
				estado=true; //si vacia
			return estado;
		}
	
	int verTope(){
			return datos[tope];//peek o mirar
		}
		
	void pop() {
			tope--;
		    cout<<"Elemento removido"<<endl;
		}
		
};

//void push(int);
//bool pilaLlena();
//int tope;
//int datos[N];

int main() {
	Pila pilaA,pilaB,pilaC,aux1;
	int opcion;
	int num;
	char op;
	
	do {
	cout<<"(1) cargar pila\n(2) pasar pila\n(3) existe el elemento en pilaA?\n(4) invertir fila1\n(5) invertir fila2"
		<<"\n(6) buscar elemento\n(7) salir\n\n eliga opcion: "; cin>>opcion;	
	
	
	switch(opcion) {
		case 1: 
			if(!pilaA.pilaLlena()) {	
				cout<<"Ingrese numero: "; cin>>num;
				pilaA.push(num);
			} else {
				cout<<"Ya esta llena la pilaA";
			}
			break;
		
		case 2: 
			if(!pilaA.pilaVacia() && !pilaB.pilaLlena()) {
				cout<<"removido el elemento "<<pilaA.verTope()<<endl;
				pilaA.pop();
				pilaB.push(pilaA.verTope());
			} else 
				cout<<"No se pudo hacer el intercambio entre pilas"<<endl;
			
			break;
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


			

			
			
			
			
			
			
			
			
			
			
			
			
