#include<iostream>
#include"ericka.h"
usingnamespace std;


//Función para registar ventas
void registrarVentas(Artefacto catalogo[ ], int cantidad)
{
	int codigoBuscado, cantidadDeseada;
	cout<<"REGISTRAR VENTA";
	cout<<"Ingrese codigo del producto:";cin>>codigoBuscado;
	
	for(int i=0;i<cantidad;i++)
	{
		if(codigoBuscado==catalogo[i].codigo && catalogo[i].activo==true)
		{
			cout<<"Stock actual del producto: "<<catalogo[i].stock<<endl;
			cout<<"Ingrese la cantidad a vender: ";cin>>cantidadDeseada;
				if(cantidadDeseada<=catalogo[i].stock)
				{
					catalogo[i].stock =catalogo[i].stock-cantidadDeseada;
					cout<<"\n---BOLETA DE VENTA---"<<endl;
					cout<<"Producto: "<<catalogo[i].nombre<<" "<<catalogo[i]marca<<endl;
					cout<<"Cantidad: "<<cantidadDeseada<<endl;
					cout<<"Total a pagar: S/."<<cantidadDeseada*catalogo[i].precio<<endl;
					cout<<"-----------------------"<<endl;
				}
				else
				{
					cout<<"Stock insuficiente"<<endl;
				}			
				
			}
			
		}
		cout<<"Producto no encontrado y inactivo"<<endl;
}


//Función para reabastecer stock

void reabastecerStock(Artefacto catalogo[ ], int cantidad)
{
	int codigo_producto, cantidad_ingresada;
	
	cout<<"---REABASTECER STOCK---"<<endl;
	cout<<"Ingrese codigo del producto: ";cin>>codigo_producto;
	
	for(int i=0;i<cantidad;i++)
	{
		if(codigo_producto==catalogo[i].codigo && catalogo[i].activo==true)
		{
			cout<<"Ingrese cantidad que llego al almacen: ";cin>>cantidad_ingresada;
			catalogo[i].stock+=cantidad_ingresada;
			cout<<"Stock actualizado."<<endl;
			cout<<"Nuevo stock: "<<catalogo[i].stock<<endl;
			return;
		}
	}
	cout<<"Producto no encontrado o activo."<<endl;
}
