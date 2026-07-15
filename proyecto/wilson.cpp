#include <iostream>
#include <iomanip>
#include<string>
#include "wilson.h"
using namespace std;
//funcion para registrar el catalogo
int anadirArtefacto(Artefacto catalogo[], int cantidad) {
    if (cantidad >= 100) {
        cout << "Error: El catalogo esta lleno." << endl;
    }
    else {
        cout << "--- REGISTRAR NUEVO ARTEFACTO ---" << endl;
        cout << "Ingrese codigo: ";
        cin >> catalogo[cantidad].codigo;
        cin.ignore();
        cout << "Ingrese el nombre del producto: ";
        getline(cin,catalogo[cantidad].nombre); //en este commit estamos añadiendo el nombre
        cout << "Ingrese marca: ";
		getline(cin,catalogo[cantidad].marca);
		cout << "Ingrese stock: ";
        cin >> catalogo[cantidad].stock;
		cout << "Ingrese precio unitario (S/.): ";cin >> catalogo[cantidad].precio;
        cin.ignore();
        catalogo[cantidad].activo = true;
        cantidad = cantidad + 1;
        cout << "Artefacto guardado con exito." << endl;
    }
    return cantidad;
}
//funcion para mostrar el catalogo
void mostrarCatalogo(Artefacto catalogo[], int cantidad) {
    int contador = 0;
    cout << "                      --- LISTA DE ARTEFACTOS ACTIVOS ---" << endl;
    if (cantidad > 0) {
        // Ampliamos la línea a 80 guiones para que cubra toda la tabla
        cout << "--------------------------------------------------------------------------------" << endl;
        // CODIGO (12) | NOMBRE (25) | MARCA (20) | STOCK (12) | PRECIO (libre)
        cout << left << setw(12) << "CODIGO"
             << setw(25) << "NOMBRE"
             << setw(20) << "MARCA"
             << setw(12) << "STOCK"
             << "PRECIO" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }
    for (int i = 0; i < cantidad; i++) {
        if (catalogo[i].activo == true) {
            cout << left << setw(12) << catalogo[i].codigo
                 << setw(25) << catalogo[i].nombre
                 << setw(20) << catalogo[i].marca
                 << setw(12) << catalogo[i].stock
                 << "S/. " << catalogo[i].precio << endl;
            contador = contador + 1;
        }
    }
    if (contador > 0) {
        cout << "--------------------------------------------------------------------------------" << endl;
    }
    if (contador == 0) {
        cout << "No hay artefactos registrados en el sistema." << endl;
    }
}
