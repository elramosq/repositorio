#include <iostream>
#include "wilson.h"
using namespace std;
int anadirArtefacto(Artefacto catalogo[], int cantidad) {
    // Validamos si ya llegamos al limite de 100 espacios
    if (cantidad >= 100) {
        cout << "Error: El catalogo esta lleno." << endl;
    }
    else {
        cout << "--- REGISTRAR NUEVO ARTEFACTO ---" << endl;
        cout << "Ingrese codigo: ";
        cin >> catalogo[cantidad].codigo;
        cout << "Ingrese marca: ";
        cin >> catalogo[cantidad].marca;
        cout << "Ingrese stock: ";
        cin >> catalogo[cantidad].stock;
        cout << "Ingrese precio: ";
        cin >> catalogo[cantidad].precio;
        catalogo[cantidad].activo = true;
        // Sumamos 1 a la cantidad de productos actual
        cantidad = cantidad + 1;
        cout << "Artefacto guardado con exito." << endl;
    }
    return cantidad;
}
// mostramos la lista de productos activos
void mostrarCatalogo(Artefacto catalogo[], int cantidad) {
    int contador = 0; // Para saber si mostramos algun producto
    cout << "--- LISTA DE ARTEFACTOS ACTIVOS ---" << endl;
    // Recorremos el arreglo desde cero hasta la cantidad actual
    for (int i = 0; i < cantidad; i++) {
        // Solo mostramos los productos que esten activos
        if (catalogo[i].activo == true) {
            cout << "Codigo: " << catalogo[i].codigo << endl;
            cout << "Marca: " << catalogo[i].marca << endl;
            cout << "Stock: " << catalogo[i].stock << endl;
            cout << "Precio: S/. " << catalogo[i].precio << endl;
            cout << "--------------------------------" << endl;
            contador = contador + 1; // Contamos el producto que se mostro
        }
    }
    // Si el contador se quedo en cero, avisamos que no hay nada activo
    if (contador == 0) {
        cout << "No hay artefactos registrados en el sistema." << endl;
    }
}
