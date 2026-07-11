#include <iostream>
#include "estructura.h"
#include "wilson.h"
#include "erick.h"
#include "ericka.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	Artefacto catalogo[100];
	int opcion=0, cantidadProductos=0;
	while(opcion!=7)
	{
		cout<<"\n============SISTEMA DE VENTAS============"<<endl;
		cout<<"1. Anadir un nuevo artefacto al catalogo"<<endl;
		cout<<"2. Mostrar catalogo de productos activos"<<endl;
		cout<<"3. Buscar artefacto por codigo o marca"<<endl;
		cout<<"4. Eliminar o descontinuar producto"<<endl;
		cout<<"5. Registrar venta y boleta"<<endl;
		cout<<"6. Reabastecer stock"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"========================================="<<endl;
		cout<<"Elija una opcion: ";	
		cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				
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
			registrarVenta(catalogo, cantidadProductos);
			break;
			case 6:
			reabastecerStock(catalogo, cantidadProductos);
			break;
			case 7;
			break;
			default:
			cout<<"Opcion invalida. Intente de nuevo.";
		};
	}
	
	
	
	return 0;						
}
	
	
	
	
