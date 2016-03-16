//Producto.cpp
#include "producto.h"

//Constructor por defecto
Producto::Producto(){
	this->codigo=0;
	this->precio=0;
	this->nombre="";
}

//Otro constructor
Producto::Producto(int codigo, string nombre){
	this->codigo=codigo;
	this->nombre=nombre;
	this->precio=0;
}

//Constructor copia
Producto::Producto(const Producto &p){
	this->codigo=p.codigo;
	this->nombre=p.nombre;
	this->precio=p.precio;
}

//Get Codigo Producto
int Producto::GetCodigo(){
	return this->codigo;
}

//Set código producto
void Producto::SetCodigo(int codigo){
	this->codigo=codigo;
}

//Se agrega el atributo empresa

void Producto::SetEmpresa(Empresa* e){
	this->empresa=e;
}
