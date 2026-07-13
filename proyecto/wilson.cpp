#include <iostream>
#include <iomanip>
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
        cout << "Ingrese el nombre del producto: ";
        cin >> catalogo[cantidad].nombre; //en este commit estamos añadiendo el nombre
        cout << "Ingrese marca: ";
        cin >> catalogo[cantidad].marca;
        cout << "Ingrese stock: ";
        cin >> catalogo[cantidad].stock;
        cout << "Ingrese precio: ";
        cin >> catalogo[cantidad].precio;
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
    cout << "--- LISTA DE ARTEFACTOS ACTIVOS ---" << endl;
    if (cantidad > 0) {
        cout << "-----------------------------------------------------" << endl;
        cout << left << setw(12) << "CODIGO" << setw(18) << "NOMBRE" << setw(16) << "MARCA" << setw(12) << "STOCK" << "PRECIO" << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    for (int i = 0; i < cantidad; i++) {
        if (catalogo[i].activo == true) {
            cout << left << setw(12) << catalogo[i].codigo << setw(18) << catalogo[i].nombre << setw(16) << catalogo[i].marca << setw(12) << catalogo[i].stock << "S/. " << catalogo[i].precio << endl;
            contador = contador + 1;
        }
    }
    if (contador > 0) {
        cout << "-----------------------------------------------------" << endl;
    }
    if (contador == 0) {
        cout << "No hay artefactos registrados en el sistema." << endl;
    }
}
