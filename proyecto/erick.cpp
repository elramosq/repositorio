#include <iostream>
#include <string>
#include "erick.h"

using namespace std;


//Funcion buscarArtefacto
void buscarArtefacto(Artefacto catalogo[], int cantidad) {
    int opcionBusqueda;
    bool encontrado = false;
    
    cout << "\n--- BUSCAR ARTEFACTO ---" << endl;
    cout << "1. Buscar por codigo (Numerico)" << endl;
    cout << "2. Buscar por marca (Texto)" << endl;
    cout << "Elija como desea buscar: ";
    cin >> opcionBusqueda;
    
   
    if (opcionBusqueda == 1) {
        int codBusqueda;
        cout << "Ingrese codigo a buscar: ";
        cin >> codBusqueda;
        
        for (int i = 0; i < cantidad; i++) {
            if (catalogo[i].codigo == codBusqueda && catalogo[i].activo == true) {
                cout << "Encontrado - Marca: " << catalogo[i].marca 
                     << ", Precio: S/." << catalogo[i].precio 
                     << ", Stock: " << catalogo[i].stock << endl;
                encontrado = true;
            }
        }
    } 
   
    else if (opcionBusqueda == 2) {
        string marcaBusqueda;
        cout << "Ingrese la marca a buscar: ";
        cin >> marcaBusqueda;
        
        for (int i = 0; i < cantidad; i++) {
         
            if (catalogo[i].marca == marcaBusqueda && catalogo[i].activo == true) {
                cout << "Encontrado - Codigo: " << catalogo[i].codigo 
                     << ", Marca: " << catalogo[i].marca 
                     << ", Precio: S/." << catalogo[i].precio 
                     << ", Stock: " << catalogo[i].stock << endl;
                encontrado = true;
            }
        }
    } 
    
    else {
        cout << "Opcion de busqueda invalida." << endl;
        return;
    }
    

    if (encontrado == false) {
        cout << "Producto no encontrado o esta descontinuado." << endl;
    }
}


//Funcion descontinuarProducto
void descontinuarProducto(Artefacto catalogo[], int cantidad) {
    int codEliminar;
    cout << "\n--- DESCONTINUAR PRODUCTO ---" << endl;
    cout << "Ingrese codigo del artefacto a eliminar: ";
    cin >> codEliminar;
    
    for (int i = 0; i < cantidad; i++) {
        if (catalogo[i].codigo == codEliminar && catalogo[i].activo == true) {
            catalogo[i].activo = false; 
            cout << "Producto " << catalogo[i].marca << " descontinuado con exito." << endl;
            return;
        }
    }
    cout << "No se encontro un producto activo con ese codigo." << endl;
}
