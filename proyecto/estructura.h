#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H
#include<iostream>
#include<string>


struct Artefacto {
	int codigo;
	std::string nombre; 
    std::string marca;
	int stock;
	float precio;
	bool activo;
};
#endif
