#include <iostream>
#include <string>
#include "erick.h"

using namespace std;

void buscarArtefacto(Artefacto catalogo[], int cantidad){
	if (cantidad==0){
		cout<<"\nALERTA: El catalogo esta vacio. No hay productos disponibles."<<endl;
		return;
	}
	
	int opcionBusqueda;
	cout<< "\n--- BUSCAR ARTEFACTO ---\n1. Por codigo\n2. Por marca\nOpcion: ";
	cin >> opcionBusqueda;
	
	bool encontrado=false;
	
	if (opcionBusqueda==1){
		int codigoBuscado;
		cout<<"Ingrese el codigo: ";
		cin >> codigoBuscado;
		
		for (int i=0; i<cantidad; i++){
			if(catalogo[i].codigo==codigoBuscado){
				cout<< "\n--- Artefacto Encontrado ---" <<endl;
				cout<< "Codigo: " << catalogo[i].codigo <<endl;
				cout<< "Nombre: " << catalogo[i].nombre <<endl;
				cout<< "Marca: " << catalogo[i].marca <<endl;
				cout<< "Stock: " << catalogo[i].stock <<endl;
				cout<< "Precio: S/. " << catalogo[i].precio <<endl;
				cout<< "Estado: " << (catalogo[i].activo ? "Activo": "Descontinuado")<<endl;
				encontrado=true;
				break;
			}
		}
		if (!encontrado) cout<<"\nAlerta: No se encontro el codigo."<<endl;
	}
	else if (opcionBusqueda==2){
		string marcaBuscada;
		cout<< "Ingrese la marca. ";
		cin.ignore();
		getline(cin, marcaBuscada);
		
		cout << "\n--- Resultados para la marca: "<< marcaBuscada<< " ---"<<endl;
		for (int i=0; i<cantidad; i++){
			if (catalogo[i].marca == marcaBuscada){
				cout<< "Codigo: "<<catalogo[i].codigo<< " | Nombre: "<<catalogo[i].nombre
					<< " | Stock: " <<catalogo[i].stock << " | Estado: "
					<< (catalogo[i].activo ? "Activo" : "Descontinuado")<< endl;
				encontrado = true;
			}
		}
		if (!encontrado) cout<<"\nAlerta: No se encontraron productos de esta marca."<<endl;
	}
	else{
		cout<<"Alerta: Opcion no valida." << endl;
	}
}

void descontinuarProducto(Artefacto catalogo[], int cantidad){
}