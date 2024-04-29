#include "licencia.h"

using namespace Proyecto_SistemaCNC_model;

licencia::licencia() {

}

licencia::licencia(int codigo, String^ tipo, int num_usuarios, String^ fecha_compra, String^ fecha_vencimiento) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->num_usuarios = num_usuarios;
	this->fecha_compra = fecha_compra;
	this->fecha_vencimiento = fecha_vencimiento;
}

int licencia::getCodigo() {
	return this->codigo;
}

void licencia::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ licencia::getTipo() {
	return this->tipo;
}

void licencia::setTipo(String^ tipo) {
	this->tipo = tipo;
}

int licencia::getNumUsuarios() {
	return this->num_usuarios;
}

void licencia::setNumUsuarios(int num_usuarios) {
	this->num_usuarios = num_usuarios;
}

String^ licencia::getFechaCompra() {
	return this->fecha_compra;
}

void licencia::setFechaCompra(String^ fecha_compra) {
	this->fecha_compra = fecha_compra;
}

String^ licencia::getFechaVencimiento() {
	return this->fecha_vencimiento;
}

void licencia::setFechaVencimiento(String^ fecha_vencimiento) {
	this->fecha_vencimiento = fecha_vencimiento;
}