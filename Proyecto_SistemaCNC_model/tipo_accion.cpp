#include "tipo_accion.h"

using namespace Proyecto_SistemaCNC_model;

tipo_accion::tipo_accion() {

}

tipo_accion::tipo_accion(int codigo, String^ seleccion, administrador^ objadministrador) {
	this->codigo = codigo;
	this->seleccion = seleccion;
	this->objadministrador = objadministrador;
}

int tipo_accion::getCodigo() {
	return this->codigo;
}

void tipo_accion::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ tipo_accion::getSeleccion() {
	return this->seleccion;
}

void tipo_accion::setSeleccion(String^ seleccion) {
	this->seleccion = seleccion;
}

administrador^ tipo_accion::getObjAdministrador() {
	return this->objadministrador;
}

void tipo_accion::setObjAdministrador(administrador^ objadministrador) {
	this->objadministrador = objadministrador;
}
