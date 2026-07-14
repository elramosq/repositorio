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
}

void descontinuarProducto(Artefacto catalogo[], int cantidad){
}