#include <iostream>
#include "estructura.h"
#include "wilson.h"
#include "erick.h"
#include "ericka.h"
#include "predatos.h"

using namespace std;
int main()
{
    Artefacto catalogo[100];
    int opcion = 0, cantidadProductos = 50;
    
    precargarDatos(catalogo, cantidadProductos);
    
    
    while(opcion != 7)
    {
        cout << "\n============SISTEMA DE VENTAS============" << endl;
        cout << "1. Anadir un nuevo artefacto al catalogo" << endl;
        cout << "2. Mostrar catalogo de productos activos" << endl;
        cout << "3. Buscar artefacto por codigo o marca" << endl;
        cout << "4. Eliminar o descontinuar producto" << endl;
        cout << "5. Registrar venta y boleta" << endl;
        cout << "6. Reabastecer stock" << endl;
        cout << "7. Salir" << endl;
        cout << "=========================================" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;
        switch(opcion)
        {
            case 1:
                cantidadProductos = anadirArtefacto(catalogo, cantidadProductos);
                break;
            case 2:
                mostrarCatalogo(catalogo, cantidadProductos);
                break;
            case 3:
            	buscarArtefacto(catalogo, cantidadProductos);
                break;
            case 4:
            	descontinuarProducto(catalogo, cantidadProductos);
                break;
            case 5:
                registrarVentas(catalogo, cantidadProductos);
                break;
            case 6:
                reabastecerStock(catalogo, cantidadProductos);
                break;
            case 7:
                cout << "Saliendo del sistema... ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
        }
    }
    return 0;
}
	
	
	
	
